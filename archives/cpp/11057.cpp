#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//-------------------------------------
#define MOD 10007
int dp[1001][10];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, 10) {
        dp[1][i] = 1;
    }

    FOR(i, 2, N+1) {
        FOR(j, 0, 10) {
            for (int k = j; k >= 0; k--)  {
                dp[i][j] = (dp[i][j]+dp[i-1][k]) % MOD;
            }
        }
    }

    int ans = 0;
    FOR(i, 0, 10) {
        ans += dp[N][i];
    }

    cout << ans % MOD;

    return 0;
}