#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    cout << n << " ";

    while (n != 1) {
        if (n % 2) {
            n *= 3;
            n++;
        }
        else {
            n /= 2;
        }
        cout << n << " ";
    }

    return 0;
}
