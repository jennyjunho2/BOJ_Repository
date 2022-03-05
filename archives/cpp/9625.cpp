#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int dp[46];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = 0; dp[1] = 1; dp[2] = 1;
    FOR(i, 3, 46) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    int K; cin >> K;
    cout << dp[K-1] << ' ' << dp[K];

    return 0;
}