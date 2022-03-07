#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

char arr[201][201];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K; cin >> K;
    string word; cin >> word;
    int word_len = word.length();
    int row = word_len / K;
    FOR(i, 0, row) {
        if (i%2 == 0) {
            FOR(j, 0, K) {
                arr[i][j] = word[i*K + j];
            }
        } else {
            FOR(j, 0, K) {
                arr[i][j] = word[i*K + K-1-j];
            }
        }
    }

    FOR(i, 0, K) {
        FOR(j, 0, row) {
            cout << arr[j][i];
        }
    }

    return 0;
}