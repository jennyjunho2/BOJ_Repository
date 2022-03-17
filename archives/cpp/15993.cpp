#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000009
ll dp[100001][2];

int main() {
    fastio

    dp[1][0] = 1;
    dp[2][0] = 1; dp[2][1] = 1;
    dp[3][0] = 2; dp[3][1] = 2;
    FOR(i, 4, 100001) {
        dp[i][0] = (dp[i-1][1]+dp[i-2][1]+dp[i-3][1]) % MOD;
        dp[i][1] = (dp[i-1][0]+dp[i-2][0]+dp[i-3][0]) % MOD;
    }

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << dp[n][0] << ' ' << dp[n][1] << endl;
    }

    return 0;
}