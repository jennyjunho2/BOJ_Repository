#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int drink[10001];
int dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    FOR(i, 1, n+1){
        cin >> drink[i];
    }

    dp[1] = drink[1];
    dp[2] = drink[1] + drink[2];
    dp[3] = max(drink[1] + drink[3], drink[2] + drink[3]);
    dp[3] = max(dp[2], dp[3]);
    FOR(i, 4, n+1){
        dp[i] = max(dp[i-2] + drink[i], dp[i-3] + drink[i-1] + drink[i]);
        dp[i] = max(dp[i-1], dp[i]);
    }

    cout << dp[n];

    return 0;
}