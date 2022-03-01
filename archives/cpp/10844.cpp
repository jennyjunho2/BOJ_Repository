#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1000000000
using namespace std;

long dp[101][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1][0] = 0;
    FOR(i, 1, 10){
        dp[1][i] = 1;
    }

    FOR(i, 2, 101){
        dp[i][0] = dp[i-1][1] % MOD;
        dp[i][9] = dp[i-1][8] % MOD;
        FOR(j, 1, 9){
            dp[i][j] = (dp[i-1][j+1] + dp[i-1][j-1]) % MOD;
        }
    }

    long sum = 0L;
    int N; cin >> N;
    FOR(i, 0, 10){
        sum += (dp[N][i] % MOD);
    }
    cout << sum % MOD;

    return 0;
}