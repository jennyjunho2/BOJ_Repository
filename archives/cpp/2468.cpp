#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int graph[100][100];
bool visited[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int safezone;

void dfs(int y, int x, int height) {
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny >= N || ny < 0 || nx >= N || nx < 0 || visited[ny][nx]) { continue; }

        if (graph[ny][nx] <= height) { continue; }

        dfs(ny, nx, height);
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }

    int max_safezone = 0;
    FOR(height, 0, 101) {
        safezone = 0;
        memset(visited, 0, sizeof(visited));

        FOR(i, 0, N) {
            FOR(j, 0, N) {
                if (graph[i][j] <= height) {
                    visited[i][j] = true;
                }
            }
        }

        FOR(i, 0, N) {
            FOR(j, 0, N) {
                if (!visited[i][j]) {
                    safezone++;
                    dfs(i, j, height);
                }
            }
        }
        
        max_safezone = max(max_safezone, safezone);
    }

    cout << max_safezone;

    return 0;
}