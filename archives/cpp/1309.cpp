#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

#define MOD 9901
int dp[100001];

int main() {
    fastio

    int N; cin >> N;
    dp[0] = 1; dp[1] = 3;
    FOR(i, 2, N+1) {
        dp[i] = (2*dp[i-1] + dp[i-2]) % MOD;
        // 왜 이 점화식인지 설명
    }

    cout << dp[N];

    return 0;
}