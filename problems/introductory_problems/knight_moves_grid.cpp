#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short n;
    cin >> n;

    vector<vector<short>> grid(n, vector<short>(n, 0));
    vector<pair<short, short>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };
    pair<short, short> curr;
    queue<pair<short, short>> q;

    q.push({0, 0});
    while (!q.empty()) {
        curr = q.front();
        q.pop();

        for (const auto& move : moves) {
            short new_x = curr.first + move.first;
            short new_y = curr.second + move.second;

            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && grid[new_x][new_y] == 0 && !(new_x == 0 && new_y == 0)) {
                grid[new_x][new_y] = grid[curr.first][curr.second] + 1;
                q.push({new_x, new_y});
            }
        }
    }

    for (const auto& row : grid) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << "\n";
    }

    return 0;
}
