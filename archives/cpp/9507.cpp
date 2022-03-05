#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

long long dp[68];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = 1; dp[1] = 1; dp[2] = 2; dp[3] = 4;
    FOR(i, 4, 68) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
    }

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}