#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<unsigned long> nums;
    unsigned long temp;
    unsigned n;
    cin >> n;

    for (unsigned i = 0; i < n; i++) {
        cin >> temp;
        nums.insert(temp);
    }

    cout << nums.size() << '\n';

    return 0;
}
