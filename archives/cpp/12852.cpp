#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int dp[1000001];

int main() {
    fastio

    FOR(i, 1, 1000001) {
        dp[i] = i;
    }
    int N; cin >> N;
    dp[1] = 0; dp[2] = 1; dp[3] = 1;
    FOR(i, 4, N+1) {
        if (i%3 == 0 && i%2 == 0) {
            dp[i] = min({dp[i-1], dp[i/2], dp[i/3]}) + 1;
        } else if (i%3 == 0) {
            dp[i] = min(dp[i-1], dp[i/3]) + 1;
        } else if (i%2 == 0) {
            dp[i] = min(dp[i-1], dp[i/2]) + 1;
        } else {
            dp[i] = dp[i-1] + 1;
        }
    }

    cout << dp[N] << endl;

    // Á¶¸³
    while (N > 1) {
        cout << N << ' ';
        if (dp[N] == dp[N-1]+1) {
            N -= 1;
        } else if (N%2 == 0 && dp[N] == dp[N/2]+1) {
            N /= 2;
        } else if (N%3 == 0 && dp[N] == dp[N/3]+1) {
            N /= 3;
        }
    } cout << 1;

    return 0;
}