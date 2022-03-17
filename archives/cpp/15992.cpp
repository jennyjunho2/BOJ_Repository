#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000009
ll dp[1001][1001];

int main() {
    fastio

    dp[1][1] = 1;
    dp[2][1] = 1; dp[2][2] = 1;
    dp[3][1] = 1; dp[3][2] = 2; dp[3][3] = 1;
    FOR(i, 4, 1001) {
        FOR(j, 1, 1001) {
            dp[i][j] = (dp[i-1][j-1] + dp[i-2][j-1] + dp[i-3][j-1]) % MOD;
        }
    }

    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;
        cout << dp[n][m] << endl;
    }

    return 0;
}