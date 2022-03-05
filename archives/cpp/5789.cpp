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
    while (N--) {
        string word; cin >> word;
        int word_len = word.length();

        if (word[word_len/2 -1] == word[word_len/2]) {
            cout << "Do-it" << endl;
        } else {
            cout << "Do-it-Not" << endl;
        }
    }

    return 0;
}