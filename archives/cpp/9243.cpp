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

    int N; cin >> N;
    string word1, word2;
    cin >> word1 >> word2;
    int word_len = word1.length();
    if (N % 2 != 0) {
        FOR(i, 0, word_len) {
            if (word1[i] == word2[i]) {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    } else {
        FOR(i, 0, word_len) {
            if (word1[i] != word2[i]) {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    }

    return 0;
}