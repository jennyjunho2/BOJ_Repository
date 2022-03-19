#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
char graph[600][600];
int visited[600][600];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int human_cnt = 0;

void dfs(int y, int x) {
    visited[y][x] = true;
    if (graph[y][x] == 'P') {
        human_cnt++;
    }
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

        if (!visited[ny][nx] && graph[ny][nx] != 'X') {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio
    
    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] == 'I') {
                dfs(i, j);
            }
        }
    }

    if (human_cnt) {
        cout << human_cnt;
    } else {
        cout << "TT";
    }

    return 0;
} 