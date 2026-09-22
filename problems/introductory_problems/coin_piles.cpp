#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned t;
    cin >> t;

    unsigned long x, y;

    for (unsigned i = 0; i < t; i++) {
        cin >> x >> y;
        if (((x + y) % 3 == 0) && (x > y ? (2 * y >= x) : (2 * x >= y))) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
