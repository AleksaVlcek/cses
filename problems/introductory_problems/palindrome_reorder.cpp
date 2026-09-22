#include <iostream>
#include <string>
#include <map>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<unsigned char, unsigned long> dict;
    string word;
    cin >> word;

    for (unsigned long i = 0; i < word.size(); i++) {
        dict[word[i]]++;
    }

    unsigned long odds = 0;
    unsigned char odd_letter = 'A';

    for (auto letter : dict) {
        if (dict[letter.first] & 1) {
            odds++;
            odd_letter = letter.first;
        }
    }

    if (odds > 1 || (odds == 1 && !(word.size() & 1))) cout << "NO SOLUTION\n";
    else {
        if (word.size() & 1) {
            word[word.size() / 2] = odd_letter;
        }
        unsigned long i = 0;
        for (auto letter : dict) {
            for (unsigned long j = 0; j < (dict[letter.first] / 2); j++) {
                word[i + j] = word[word.size() - 1 - i -j] =  letter.first;
            }
            i += (dict[letter.first] / 2);
        }

        cout << word << '\n';
    }
    
    return 0;
}
