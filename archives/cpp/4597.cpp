#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        string word; cin >> word;
        if (word == "#") { break; }

        int word_len = word.length();
        int ones = 0;
        FOR(i, 0, word_len-1) {
            if (word[i] == '1') {
                ones++;
            }
        }
        if (word[word_len-1] == 'e') {
            if (ones%2 == 0) {
                word[word_len-1] = '0';
                cout << word << endl;
            } else {
                word[word_len-1] = '1';
                cout << word << endl;
            }
        } else {
            if (ones%2 == 0) {
                word[word_len-1] = '1';
                cout << word << endl;
            } else {
                word[word_len-1] = '0';
                cout << word << endl;
            }
        }
    }
    
    return 0;
}