#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, M;
char graph[50][50];
int visited[50][50];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};
int max_dist = -1;

int bfs(int y, int x) {
    queue<p> q;
    q.push({y, x});
    visited[y][x] = 0;

    while(!q.empty()) {
        int temp_y = q.front().first;
        int temp_x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] != -1) { continue; }

            if (graph[ny][nx] == 'L') {
                q.push({ny, nx});
                visited[ny][nx] = visited[temp_y][temp_x] + 1;
            }
        }
    }
    
    return *max_element(&visited[0][0], &visited[0][0]+50*50);
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] == 'L') {
                memset(visited, -1, sizeof(visited));
                max_dist = max(max_dist, bfs(i, j));
            }
        }
    }

    cout << max_dist;

    return 0;
}