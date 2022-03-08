#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int dp[100001];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, 100001) {
        dp[i] = i;
    }

    FOR(i, 1, N+1) {
        for(register int j = 1; i >= j*j; j++) {
            int temp = dp[i-j*j]+1;
            dp[i] = min(dp[i], temp);
        }
    }

    cout << dp[N];

    return 0;
}