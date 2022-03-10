#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int arr[1000][1000];
int dp[1000][1000];

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> arr[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (i == 0 && j == 0) {
                dp[i][j] = arr[i][j];
            } else if (i == 0) {
                dp[i][j] = arr[i][j] + dp[i][j-1];
            } else if (j == 0) {
                dp[i][j] = arr[i][j] + dp[i-1][j];
            } else {
                dp[i][j] = arr[i][j] + max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
            }
        }
    }

    cout << dp[N-1][M-1];

    return 0;
}