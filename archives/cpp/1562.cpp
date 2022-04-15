#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000000
int N;
int dp[101][10][1 << 10];

int main() { fastio

    cin >> N;
    FOR(i, 1, 10) {
        dp[1][i][1 << i] = 1;
    }

    FOR(i, 2, N+1) {
        FOR(j, 0, 10) {
            FOR(k, 0, 1 << 10) {
                if (j == 0) {
                    dp[i][0][k | (1 << 0)] += dp[i-1][1][k] % MOD;
                    dp[i][0][k | (1 << 0)] %= MOD;
                } else if (j == 9) {
                    dp[i][9][k | (1 << 9)] += dp[i-1][8][k] % MOD;
                    dp[i][9][k | (1 << 9)] %= MOD;
                } else {
                    dp[i][j][k | (1 << j)] += dp[i-1][j-1][k] % MOD + dp[i-1][j+1][k] % MOD;
                    dp[i][j][k | (1 << j)] %= MOD;
                }
            }
        }
    }

    int ans = 0;
    FOR(i, 0, 10) {
        ans += dp[N][i][(1 << 10) - 1];
        ans %= MOD;
    }

    cout << ans;

    return 0;
}