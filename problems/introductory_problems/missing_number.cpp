#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long n, x;
    cin >> n;

    vector<bool> arr(n, false);

    for (unsigned long long i = 0; i < n - 1; i++) {
        cin >> x;
        arr[x - 1] = true;
    }

    for (unsigned long long i = 0; i < n; i++) {
        if (!arr[i]) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}
