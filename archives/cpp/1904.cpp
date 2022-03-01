#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    dp[1] = 1; dp[2] = 2;
    FOR(i, 3, 1000001){
        dp[i] = (dp[i-1] + dp[i-2]) % 15746;
    }

    cout << dp[N];

    return 0;
}