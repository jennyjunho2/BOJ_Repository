#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int stairs[301];
int dp[301];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 0, N) {
        cin >> stairs[i+1];
    }

    if (N == 1) {
        cout << stairs[1];
        return 0;
    } else if (N == 2) {
        cout << stairs[1] + stairs[2];
        return 0;
    }

    dp[1] = stairs[1];
    dp[2] = stairs[1] + stairs[2];
    dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);

    FOR(i, 4, N+1) {
        dp[i] = max(dp[i-2] + stairs[i], dp[i-3] + stairs[i-1] + stairs[i]);
    } 
    cout << dp[N];

    return 0;
}