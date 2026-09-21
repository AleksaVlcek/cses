#include <iostream>
using namespace std;

unsigned long long two_knights(unsigned long k) {
    unsigned long long pos = (k * k) * (k * k - 1) / 2;

    if (k & 1) {
        return pos - (2 * (2 * k - 2) * (k / 2 + k / 2 - 1));
    }
    else {
        return pos - (4 * k * k - 12 * k + 8);
    }
}

int main() {
    unsigned long n;
    cin >> n;

    for (unsigned long i = 1; i <= n; i++) {
        cout << two_knights(i) << '\n';
    }

    return 0;
}
