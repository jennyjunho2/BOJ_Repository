#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int graph[300][300];
int dp[300][300];

int main() {fastio
    
    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (i == 0 && j == 0) {
                dp[0][0] = graph[0][0];
            } else if (i == 0) {
                dp[i][j] = dp[i][j-1] + graph[i][j];
            } else if (j == 0) {
                dp[i][j] = dp[i-1][j] + graph[i][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + graph[i][j];
            }
        }
    }

    cout << dp[N-1][M-1];

    return 0;
}
