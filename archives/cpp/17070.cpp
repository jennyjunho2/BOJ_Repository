#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N;
int graph[16][16];

int main() { fastio

    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }
    int dp[16][16][3];
    fill(&dp[0][0][0], &dp[0][0][0]+16*16*3, 0);
    // 가로 : 0, 세로 : 1, 대각선 : 2
    dp[0][1][0] = 1;

    FOR(i, 2, N) {
        if (graph[0][i] == 0) {
            dp[0][i][0] = dp[0][i-1][0];
        }
    }

    FOR(i, 1, N) {
        FOR(j, 2, N) {
            if (graph[i][j] == 1) { continue; }
            
            if (graph[i-1][j] == 0 && graph[i][j-1] == 0) {
                dp[i][j][2] = dp[i-1][j-1][0] + dp[i-1][j-1][1] + dp[i-1][j-1][2];
            }

            dp[i][j][0] = dp[i][j-1][0] + dp[i][j-1][2];
            dp[i][j][1] = dp[i-1][j][1] + dp[i-1][j][2];
        }
    }

    cout << dp[N-1][N-1][0] + dp[N-1][N-1][1] + dp[N-1][N-1][2];

    return 0;
} 