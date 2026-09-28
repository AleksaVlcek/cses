#include <iostream>
#include <vector>
using namespace std;

bool back_track(vector<vector<short>> &board, vector<short> arr, short k) {
    if (board[k - 1][arr[k - 1]]) {
        for (short i = 0; i < k - 1; i++) {
            if (arr[i] == arr[k - 1] || i + arr[i] == k - 1 + arr[k - 1] || arr[k - 1] - arr[i] == k - 1 - i) return false;
        }
        return true;
    }
    return false;
}

bool is_sol(vector<vector<short>> &board, vector<short> arr, short k) {
    if (k != 8) return false;
    return back_track(board, arr, 8);
}

void count_pos(vector<vector<short>> &board, vector<short> arr, short k, int *cnt) {
    if (k > 0) {
        if (!back_track(board, arr, k)) return;
        if (is_sol(board, arr, k)) {
            (*cnt)++;
            return;
        }
    }
    if (k == 8) return;
    for (short i = 0; i < 8; i++) {
        arr[k] = i;
        count_pos(board, arr, k + 1, cnt);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<short>> board(8, vector<short>(8, 0));
    string row;

    for (short i = 0; i < 8; i++) {
        cin >> row;
        for (short j = 0; j < 8; j++) {
            if (row[j] == '.') board[i][j] = 1;
            else board[i][j] = 0;
        }
    }

    vector<short> arr(8, 0);
    int count = 0;

    count_pos(board, arr, 0, &count);
    cout << count << '\n';
    
    return 0;
}
