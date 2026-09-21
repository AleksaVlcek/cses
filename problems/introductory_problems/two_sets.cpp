#include <iostream>
using namespace std;

void print_par(unsigned long n) {
    cout << n / 2 << '\n';
    
    for (int i = 1, j = n; i < j; i += 2, j -= 2) {
        cout << i << ' ' << j << ' ';
    }

    cout << '\n' << n / 2 << '\n';
    for (int i = 2, j = n - 1; i < j; i += 2, j -= 2) {
        cout << i << ' ' << j << ' ';
    }
    cout << '\n';
}

void print_npar(unsigned long n) {
    cout << n / 2 + 1 << '\n';
    cout << n - 1 << ' ' << 1;

    for (int i = 2, j = n - 2; i < j; i += 2, j -= 2) {
        cout << ' ' << i << ' ' << j;
    }

    cout << '\n' << n / 2 << '\n' << n;
    for (int i = 3, j = n - 3; i < j; i += 2, j -= 2) {
        cout << ' ' << i << ' ' << j;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned long n;
    cin >> n;

    if ((n * (n + 1)) & 3) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';

        n & 1 ? print_npar(n) : print_par(n);
    }

    return 0;
}
