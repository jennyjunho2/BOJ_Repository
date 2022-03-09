#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        string word; cin >> word;
        sort(word.begin(), word.end());
        int word_len = word.length();
        do {
            FOR(i, 0, word_len) {
                cout << word[i];
            }
            cout << endl;
        } while (next_permutation(word.begin(), word.end()));
    }

    return 0;
}