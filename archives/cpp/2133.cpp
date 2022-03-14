#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

ll dp[31];

int main() {
    fastio

    int N; cin >> N;
    if (N%2 == 1) {
        cout << 0;
        return 0;
    }

    dp[0] = 0; dp[2] = 3;
    FOR(i, 4, N+1) {
        dp[i] = dp[i-2] * dp[2];
        for (int j = i-4; j > 0; j -= 2) {
            dp[i] += (dp[j]*2);
        }
        dp[i] += 2;
    }
    cout << dp[N];

    return 0;
}