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
#define MOD 1000000007
int N;
ll dp[1000001][2];

int main() { fastio

    cin >> N;
    dp[1][0] = 2;
    dp[2][0] = 7; dp[2][1] = 1;
    FOR(i, 3, 1000001) {
        dp[i][1] = (dp[i-1][1] + dp[i-3][0]) % MOD;
        dp[i][0] = (2*dp[i-1][0] + 3*dp[i-2][0] + 2*dp[i][1]) % MOD;
    }

    cout << dp[N][0];

    return 0;
}