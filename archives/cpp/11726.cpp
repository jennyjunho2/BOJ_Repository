#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int dp[1001] = {0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    dp[1] = 1; dp[2] = 2;
    FOR(i, 3, 1001) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    cout << dp[n];

    return 0;
}