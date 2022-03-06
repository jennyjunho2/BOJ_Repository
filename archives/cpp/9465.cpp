#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int sticker[100001][2];
int dp[100001][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        FOR(i, 0, 2) {
            FOR(j, 1, n+1) {
                cin >> sticker[j][i];
            }
        }

        dp[0][0] = 0; dp[0][1] = 0;
        dp[1][0] = sticker[1][0]; dp[1][1] = sticker[1][1];
        FOR(i, 2, n+1) {
            dp[i][0] = max(dp[i-1][1], dp[i-2][1]) + sticker[i][0];
            dp[i][1] = max(dp[i-1][0], dp[i-2][0]) + sticker[i][1];
        }

        cout << max(dp[n][0], dp[n][1]) << endl;;
    }

    return 0;
}