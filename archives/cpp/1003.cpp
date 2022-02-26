#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int dp[41][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0][0] = 1; dp[0][1] = 0;
    dp[1][0] = 0; dp[1][1] = 1;
    FOR(i, 2, 41){
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        cout << dp[N][0] << ' ' << dp[N][1] << endl;
    }

    return 0;
}