#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//-------------------------------------
#define MOD 1000000009

long long dp[100001][3];

int main() {
    fastio

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;
    FOR(i, 4, 100001) {
        dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % MOD;
        dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % MOD;
        dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % MOD;
    }

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % MOD << endl;
    }

    return 0;
}