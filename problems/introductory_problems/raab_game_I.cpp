#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short t;
    cin >> t;

    short n, a, b;

    for (short k = 0; k < t; k++) {
        cin >> n >> a >> b;

        if (a + b <= n && ((a > 0 && b > 0) || (a == 0 && b == 0))) {
            cout << "YES" << '\n';

            for (short i = 1; i <= n; i++) {
                cout << i << ' ';
            }
            cout << '\n';

            for (short i = a + 1; i <= a + b; i++) {
                cout << i << ' ';
            }
            for (short i = 1; i <= a; i++) {
                cout << i << ' ';
            }
            for (short i = a + b + 1; i <= n; i++) {
                cout << i << ' ';
            }
            cout << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
