#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int dp[501][501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(dp, -1, sizeof(dp));
    int n; cin >> n;
    FOR(i, 0, n){
        FOR(j, 0, i+1){
            cin >> dp[i][j];
        }
    }

    for (int i = n-1; i > 0; i--){
        FOR(j, 0, i){
            dp[i-1][j] += max(dp[i][j], dp[i][j+1]);
        }
    }

    cout << dp[0][0];

    return 0;
}