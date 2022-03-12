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

    int n, k; cin >> n >> k;
    coins.resize(n);
    FOR(i, 0, n) {
        cin >> coins[i];
    }

    dp[0] = 1;
    FOR(i, 0, n) {
        int coin_value = coins[i];
        FOR(j, coin_value, k+1) {
            dp[j] += dp[j-coin_value];
        }
    }

    cout << dp[k];
    
    return 0;
}