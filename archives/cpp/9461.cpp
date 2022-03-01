#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

long dp[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1] = 1; dp[2] = 1; dp[3] = 1;
    dp[4] = 2; dp[5] = 2; dp[6] = 3;
    FOR(i, 7, 101){
        dp[i] = dp[i-1] + dp[i-5];
    }

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        cout << dp[N] << endl;
    }

    return 0;
}