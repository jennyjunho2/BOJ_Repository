#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n;
int graph[500][500];
int visited[500][500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int max_move;

int dfs(int y, int x) {
    if (visited[y][x]) { return visited[y][x]; }

    visited[y][x] = 1;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n) { continue; }

        if (graph[ny][nx] > graph[y][x]) {
            visited[y][x] = max(visited[y][x], dfs(ny, nx) + 1);
        }
    }

    return visited[y][x];
}

int main() {
    fastio
    
    cin >> n;
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, n) {
        FOR(j, 0, n) {
            max_move = max(max_move, dfs(i, j));
        }
    }

    cout << max_move;

    return 0;
} 