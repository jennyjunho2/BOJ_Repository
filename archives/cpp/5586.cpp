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

    string word; cin >> word;
    int word_len = word.length();
    int joi = 0, ioi = 0;
    FOR(i, 0, word_len - 2) {
        if (word[i] == 'J' && word[i + 1] == 'O' && word[i + 2] == 'I') {
            joi++;
        } else if (word[i] == 'I' && word[i + 1] == 'O' && word[i + 2] == 'I')
            ioi++;
    }
    cout << joi << endl << ioi;
    return 0;
}