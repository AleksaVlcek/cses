#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned long long n;
    cin >> n;

    unsigned long long zeros = 0;
    for (unsigned long long p = 5; p <= n; p *= 5) zeros += n / p;

    cout << zeros << '\n';
    
    return 0;
}
