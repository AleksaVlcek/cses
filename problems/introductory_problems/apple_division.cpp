#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void calc_min_diff(vector<unsigned long long> arr, short n, short pos, unsigned long long sum1, unsigned long long sum2, unsigned long long &diff) {
    if (n == pos) {
        unsigned long long temp = sum1 - sum2 > 0 ? sum1 - sum2 : sum2 - sum1;
        diff = temp < diff ? temp : diff;
        return;
    }
    sum1 += arr[pos];
    calc_min_diff(arr, n, pos + 1, sum1, sum2, diff);
    sum1 -= arr[pos];
    sum2 += arr[pos];
    calc_min_diff(arr, n, pos + 1, sum1, sum2, diff);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short n;
    cin >> n;

    vector<unsigned long long> p(n);
    for (short i = 0; i < n; i++) cin >> p[i];

    unsigned long long diff = -1;
    calc_min_diff(p, n, 0, 0, 0, diff);
    cout << diff << '\n';
    
    return 0;
}
