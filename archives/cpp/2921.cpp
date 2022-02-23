#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;

    int dp[1001];
    dp[1] = 3;
    FOR(i, 2, N+1) {
        dp[i] = dp[i-1] + 1.5*i*(i+1);
    }

    cout << dp[N];

    return 0;
}