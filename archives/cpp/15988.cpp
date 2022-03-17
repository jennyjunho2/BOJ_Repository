#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000009

ll dp[1000001];

int main() {
    fastio

    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    FOR(i, 4, 1000001) {
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]) % MOD;
    }

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}