#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M, K;
int graph[100][100];
bool visited[100][100];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int temp_cnt = 0;

void dfs(int y, int x) {
    temp_cnt++;
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

        if (!visited[ny][nx] && graph[ny][nx] == 1) {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio
    
    memset(visited, 0, sizeof(visited));
    cin >> N >> M >> K;
    memset(graph, 0, sizeof(graph));

    FOR(i, 0, K) {
        int y, x; cin >> y >> x;
        graph[y-1][x-1] = 1;
    }

    int max_cnt = 0;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] == 1 && !visited[i][j]) {
                temp_cnt = 0;
                dfs(i, j);
                max_cnt = max(max_cnt, temp_cnt);
            }
        }
    }

    cout << max_cnt;

    return 0;
} 