#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int RGB[1001][3];
int dp[1001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 1, N+1){
        cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];
    }
    memset(dp, 0, sizeof(dp));
    dp[1][0] = RGB[1][0]; dp[1][1] = RGB[1][1]; dp[1][2] = RGB[1][2];

    FOR(i, 2, 1001){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + RGB[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + RGB[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + RGB[i][2];
    }

    cout << min({dp[N][0], dp[N][1], dp[N][2]});


    return 0;
}