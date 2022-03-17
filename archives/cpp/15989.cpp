#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

ll dp[10001][4];

int main() {
    fastio

    dp[1][1] = 1; dp[1][2] = 0; dp[1][3] = 0;
    dp[2][1] = 1; dp[2][2] = 1; dp[2][3] = 0;
    dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;
    FOR(i, 4, 10001) {
        dp[i][1] = dp[i-1][1];
        dp[i][2] = dp[i-2][2] + dp[i-2][1];
        dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
    }

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << dp[n][1] + dp[n][2] + dp[n][3] << endl;
    }

    return 0;
}