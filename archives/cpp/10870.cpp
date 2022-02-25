#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int dp[21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    dp[0] = 0; dp[1] = 1;
    FOR(i, 2, 21){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];

    return 0;
}