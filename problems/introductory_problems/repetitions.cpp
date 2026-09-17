#include <iostream>
using namespace std;

int main() {
    int max_len = 1, cur_len = 1;
    string dna;
    cin >> dna;
    char prev = dna[0];

    for (unsigned long i = 1; i < dna.length(); i++) {
        if (dna[i] == prev) {
            cur_len++;
        }
        else {
            prev = dna[i];
            max_len = cur_len > max_len ? cur_len : max_len;
            cur_len = 1;
        }
    }

    cout << (cur_len > max_len ? cur_len : max_len) << endl;

    return 0;
}
