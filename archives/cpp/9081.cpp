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

    int T; cin >> T;
    vector<char> words;
    while (T--){
        string word; cin >> word;
        words.clear();
        for (char ch: word) {
            words.push_back(ch);
        }

        vector<char> words2(words);
        int words_len = words.size();
        if (next_permutation(words.begin(), words.end()) ){
            FOR(i, 0, words_len) {
                cout << words[i];
            } 
        } else {
            FOR(i, 0, words_len) {
                cout << words2[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}