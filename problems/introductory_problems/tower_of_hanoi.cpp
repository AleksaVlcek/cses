#include <iostream>
#include <vector>
using namespace std;

void tower_of_hanoi(short n, short from, short to) {
    short temp = 0;
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }

    for (int i = 1; i <= 3; i++) {
        if (i != from && i != to) temp = i;
    }

    tower_of_hanoi(n - 1, from, temp);
    cout << from << ' ' << to << '\n';
    tower_of_hanoi(n - 1, temp, to);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short n;
    cin >> n;

    unsigned long long moves = (1 << n) - 1;
    cout << moves << '\n';

    tower_of_hanoi(n, 1, 3);
    
    return 0;
}
