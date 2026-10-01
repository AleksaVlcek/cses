#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short n;
    cin >> n;

    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++) cout << (i ^ j) << ' ';
        cout << '\n';
    }

    return 0;
}
