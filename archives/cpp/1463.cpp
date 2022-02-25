#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    dp[1] = 0; dp[2] = 1; dp[3] = 1;

    FOR(i, 4, 1000001){
        if (i % 2 == 0 && i % 3== 0) {
            dp[i] = min({dp[i-1], dp[i/2], dp[i/3]}) + 1;
        } else if (i % 2 == 0 && i % 3 != 0) {
            dp[i] = min(dp[i-1], dp[i/2]) + 1;
        } else if (i % 2 != 0 && i % 3 == 0) {
            dp[i] = min(dp[i-1], dp[i/3]) + 1;
        } else {
            dp[i] = dp[i-1] + 1;
        }
    }

    cout << dp[N];

    return 0;
}