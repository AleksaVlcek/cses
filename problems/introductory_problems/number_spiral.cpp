#include <iostream>
using namespace std;

unsigned long long num_spiral(unsigned long long x, unsigned long long y) {
    unsigned long long n = x > y ? x : y;
    unsigned long long res = n * n - n + 1;

    if (x == y) {
        return res;
    }
    else {
        if (n & 1) {
            return res - (x - y);
        }
        else {
            return res + (x - y);
        }
    }
}

int main() {
    unsigned int t;
    unsigned long long x, y;

    cin >> t;

    for (unsigned int i = 0; i < t; i++) {
        cin >> x >> y;
        cout << num_spiral(x, y) << '\n';
    }

    return 0;
}