#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int R, C;
char graph[250][250];
bool visited[250][250];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int total_wolf, total_sheep;

p bfs(int start_y, int start_x) {
    queue<p> q;
    int wolf_cnt = 0, sheep_cnt = 0;
    q.push({start_y, start_x});
    visited[start_y][start_x] = true;
    if (graph[start_y][start_x] == 'v') {
        wolf_cnt++;
    } else if (graph[start_y][start_x] == 'o') {
        sheep_cnt++;
    }

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx] || graph[ny][nx] == '#') { continue; }

            if (graph[ny][nx] == 'o') {
                sheep_cnt++;
            } else  if (graph[ny][nx] == 'v') {
                wolf_cnt++;
            }

            visited[ny][nx] = true;
            q.push({ny, nx});
        }
    }

    if (sheep_cnt > wolf_cnt) {
        return {sheep_cnt, 0};
    } else {
        return {0, wolf_cnt};
    }
}

int main() { fastio

    cin >> R >> C;
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, R) {
        FOR(j, 0, C) {
            if (graph[i][j] != '#' && !visited[i][j]) {
                p result = bfs(i, j);
                total_sheep += result.first;
                total_wolf += result.second;
            }
        }
    }

    cout << total_sheep << ' ' << total_wolf;

    return 0;
}