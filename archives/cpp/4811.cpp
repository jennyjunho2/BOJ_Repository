#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

long long dp[31];

int main() {
    fastio

    dp[0] = 1; dp[1] = 1;
    FOR(i, 2, 31) {
        dp[i] = 0;
        FOR(j, 0, i) {
            dp[i] += dp[j]*dp[i-1-j];
        }
    }

    while (true) {
        int N; cin >> N;
        if (N == 0) { break; }

        cout << dp[N] << endl;
    }

    return 0;
}