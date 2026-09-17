#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long n;
    unsigned long long count = 0;
    cin >> n;

    vector<unsigned long long> a(n);
    cin >> a[0];
    for (unsigned long long i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < a[i - 1]) {
            count += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << count << endl;
    return 0;
}
