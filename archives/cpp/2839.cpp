#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int dp[5001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    FOR(i, 1, 5001){
        dp[i] = -1;
    }
    dp[3] = 1; dp[5] = 1; dp[6] = 2;
    FOR(i, 5*3-5-3+1, 5001) {
        if (dp[i-5] != -1 && dp[i-3] != -1) {
            dp[i] = min(dp[i-5], dp[i-3]) + 1;
        } else if (dp[i-5] == -1 && dp[i-3] != -1) {
            dp[i] = dp[i-3] + 1;
        } else {
            dp[i] = dp[i-5] + 1;
        }
    }

    cout << dp[N];

    return 0;
}