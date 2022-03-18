#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M, total_cnt;
int graph[500][500];
int dp[500][500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(int y, int x) {
    
    if (y == N-1 && x == M-1) {
        return 1;
    }

    if (dp[y][x] != -1) {
        return dp[y][x];
    }

    dp[y][x] = 0;
    // 세 방향만 탐색
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

        if (graph[y][x] > graph[ny][nx]) {
            dp[y][x] += dfs(ny, nx);
        }
    }

    return dp[y][x];
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
            dp[i][j] = -1;
        }
    }

    total_cnt = dfs(0, 0);

    cout << total_cnt;

    return 0;
}