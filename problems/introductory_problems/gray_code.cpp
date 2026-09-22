#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<short> &v) {
    for (short i = 0; i < static_cast<short>(v.size()); i++) {
        cout << v[i];
    }
    cout << '\n';
}

void print_code(vector<short> &v, short pos) {
    if (pos == 1) {
        print_vec(v);
        v[pos - 1] ^= 1;
        print_vec(v);
        return;
    }
    print_code(v, pos - 1);
    v[pos - 1] ^= 1;
    print_code(v, pos - 1);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short n;
    cin >> n;

    vector<short> v(n, 0);
    print_code(v, n);
    
    return 0;
}
