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
        int pos = 0;
        FOR(i, 0, word_len) {
            char ch = word[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                pos = i;
                break;
            }
        }
        word = word.substr(pos) + word.substr(0, pos) + "ay";
        cout << word << endl;
    }
    
    return 0;
}