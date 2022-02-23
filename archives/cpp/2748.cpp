#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    long long dp[91];

    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i < 91; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n];

    return 0;
}