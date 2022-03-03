#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

long long dp[91][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1][0] = 0; dp[1][1] = 1;
    FOR(i, 2, 91){
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0]; 
    }

    int N; cin >> N;
    cout << dp[N][0] + dp[N][1];

    return 0;
}