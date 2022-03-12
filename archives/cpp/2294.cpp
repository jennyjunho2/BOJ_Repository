#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//-------------------------------------

vector<int> coins;
int dp[10001];

int main() {
    fastio

    fill(dp, dp+10001, 10001);
    int n, k; cin >> n >> k;
    coins.resize(n);
    FOR(i, 0, n) {
        cin >> coins[i];
        if (coins[i] <= 10000) {
            dp[coins[i]] = 1;
        }
    }

    FOR(i, 1, k+1) {
        FOR(j, 0, n) {
            if (i >= coins[j]) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }

    cout << (dp[k] == 10001 ? -1 : dp[k]);

    return 0;
}