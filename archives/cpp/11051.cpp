#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 10007
int dp[1001][1001];

int main() {
    fastio
    
    FOR(n, 1, 1001) {
        FOR(k, 0, n+1) {
            if (k == 0) {
                dp[n][k] = 1;
            } else if (k == 1) {
                dp[n][k] = n;
            } else {
                dp[n][k] = (dp[n-1][k-1] + dp[n-1][k]) % MOD;
            }
        }
    }

    int N, K; cin >> N >> K;
    cout << dp[N][K];

    return 0;
} 