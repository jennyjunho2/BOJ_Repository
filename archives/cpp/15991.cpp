#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000009
ll dp[100001];

int main() {
    fastio

    dp[1] = 1; dp[2] = 2; dp[3] = 2; dp[4] = 3; dp[5] = 3; dp[6] = 6;
    FOR(i, 7, 100001) {
        dp[i] = (dp[i-2] + dp[i-4] + dp[i-6]) % MOD;
    }

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}