#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        string word; cin >> word;
        int word_len = word.length();
        int N = sqrt(word_len);
        
        char arr[N][N];
        FOR(i, 0, word_len) {
            arr[i/N][i%N] = word[i];
        }

        for (int i = N-1; i >= 0; i--) {
            FOR(j, 0, N) {
                cout << arr[j][i];
            }
        }
        cout << endl;
    }

    return 0;
}