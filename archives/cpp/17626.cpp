#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int dp[50001];

int main() {
    fastio

    FOR(i, 0, 50001) {
        dp[i] = i;
    }

    FOR(i, 2, 50001) {
        for (int j = 1; j*j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }

    int n; cin >> n;
    cout << dp[n];
    
    return 0;
}