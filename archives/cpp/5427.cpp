#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int w, h;
char graph[1000][1000];
int fire_visited[1000][1000];
int sang_visited[1000][1000];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    fastio
    
    int T; cin >> T;
    while(T--) {
        cin >> w >> h;
        FOR(i, 0, h) {
            FOR(j, 0, w) {
                cin >> graph[i][j];
            }
        }
        queue<p> fire_q;
        queue<p> sang_q;
        memset(fire_visited, -1, sizeof(fire_visited));
        memset(sang_visited, -1, sizeof(sang_visited));

        FOR(i, 0, h) {
            FOR(j, 0, w) {
                if (graph[i][j] == '*') {
                    fire_q.push({i, j});
                    fire_visited[i][j] = 0;
                } else if (graph[i][j] == '@') {
                    sang_q.push({i, j});
                    sang_visited[i][j] = 0;
                }
            }
        }

        while (!fire_q.empty()) {
            int temp_y = fire_q.front().first;
            int temp_x = fire_q.front().second;
            fire_q.pop();

            FOR(i, 0, 4) {
                int ny = temp_y + dy[i];
                int nx = temp_x + dx[i];

                if (ny < 0 || ny >= h || nx < 0 || nx >= w || fire_visited[ny][nx] >= 0 || graph[ny][nx] == '#') { continue; }

                fire_visited[ny][nx] = fire_visited[temp_y][temp_x] + 1;
                fire_q.push({ny, nx});
            }
        }

        bool is_sang_escaped = false;
        while (!sang_q.empty() && !is_sang_escaped) {
            int temp_y = sang_q.front().first;
            int temp_x = sang_q.front().second;
            sang_q.pop();

            FOR(i, 0, 4) {
                int ny = temp_y + dy[i];
                int nx = temp_x + dx[i];

                if (ny < 0 || ny >= h || nx < 0 || nx >= w) {
                    is_sang_escaped = true;
                    cout << sang_visited[temp_y][temp_x] + 1 << endl;
                    break;
                }

                if (sang_visited[ny][nx] >= 0 || graph[ny][nx] == '#') { continue; }
                if (fire_visited[ny][nx] != -1 && fire_visited[ny][nx] <= sang_visited[temp_y][temp_x] + 1) { continue; }

                sang_visited[ny][nx] = sang_visited[temp_y][temp_x] + 1;
                sang_q.push({ny, nx});
                
            }
        }

        if (!is_sang_escaped) {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
} 