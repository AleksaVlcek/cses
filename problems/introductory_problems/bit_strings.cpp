#include <iostream>
using namespace std;

int main () {
    unsigned long n;
    cin >> n;

    unsigned long long rem = 1;

    for (int i = 0; i < 9; i++) rem *= 10;
    rem += 7;

    unsigned long long x = 1;
    
    for (unsigned long i = 0; i < n; i++) {
        x <<= 1;
        x %= rem;
    }

    cout << x << '\n';

    return 0;
}
