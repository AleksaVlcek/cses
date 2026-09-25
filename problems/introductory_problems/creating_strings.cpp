#include <iostream>
#include <string>
#include <map>
using namespace std;

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;
    int i = n, fact = 1;
    while (i > 1) {
        fact *= i;
        i--;
    }
    return fact;
}

map<char, short> mapper(string word) {
    map<char, short> dict;

    for (unsigned long long i = 0; i < word.size(); i++) {
        dict[word[i]]++;
    }

    return dict;
}

unsigned long long num_of_words(string &word, map<char, short> &dict) {
    unsigned long long n = 0;
    n = factorial(word.size());

    for (auto letter : dict) {
        n /= factorial(dict[letter.first]);
    }

    return n;
}

void print_words(string word, unsigned long long len, unsigned long long pos, map<char, short> dict) {
    if (len == pos) {cout << word << '\n'; return;}
    for (auto letter : dict) {
        if (dict[letter.first] > 0) {
            word[pos] = letter.first;
            dict[letter.first]--;
            print_words(word, len, pos + 1, dict);
            dict[letter.first]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    map<char, short> dict = mapper(word);

    unsigned long long n = num_of_words(word, dict);
    cout << n << '\n';

    print_words(word, word.size(), 0, dict);
    
    return 0;
}
