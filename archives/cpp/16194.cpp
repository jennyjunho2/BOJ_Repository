#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int price[10001];
int dp[10001];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 1, N+1) {
        cin >> price[i];
        dp[i] = price[i];
    }

    FOR(i, 1, N+1) {
        FOR(j, 1, i) {
            dp[i] = min(dp[i], dp[i-j] + dp[j]);
        }
    }

    cout << dp[N];

    return 0;
}