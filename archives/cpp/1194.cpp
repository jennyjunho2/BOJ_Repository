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
using t = tuple<int, int, int>;
int N, M;
char graph[50][50];
int visited[50][50][1 << 6];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
int start_y, start_x;

int bfs(int sy, int sx) {
    queue<t> q;
    q.push({sy, sx, 0});
    visited[sy][sx][0] = 1;

    while(!q.empty()) {
        t now = q.front(); q.pop();
        int y = get<0>(now);
        int x = get<1>(now);
        int key = get<2>(now);

        if (graph[y][x] == '1') { return visited[y][x][key]-1; }

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx][key] != 0 || graph[ny][nx] == '#') { continue; }

            if (graph[ny][nx] >= 'a' && graph[ny][nx] <= 'f') {
                int new_key = key | (1 << (graph[ny][nx]-'a'));
                visited[ny][nx][new_key] = visited[y][x][key] + 1;
                q.push({ny, nx, new_key});
            } else if (graph[ny][nx] >= 'A' && graph[ny][nx] <= 'F') {
                bool have_key = key & (1 << (graph[ny][nx]-'a'));
                if (have_key) {
                    visited[ny][nx][key] = visited[y][x][key] + 1;
                    q.push({ny, nx, key});
                }
            } else if (visited[ny][nx][key] == 0) {
                visited[ny][nx][key] = visited[y][x][key]+1;
                q.push({ny, nx, key});
            }
        }
    }

    return -1;
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];

            if (graph[i][j] == '0') {
                start_y = i; start_x = j;
            }
        }
    }

    cout << bfs(start_y, start_x);

    return 0;
}