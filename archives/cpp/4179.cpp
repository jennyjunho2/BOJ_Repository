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
int R, C;
char graph[1000][1000];
int fire_visited[1000][1000];
int jihoon_visited[1000][1000];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    fastio
    
    cin >> R >> C;

    FOR(i, 0, R) {
        FOR(j, 0, C) {
            cin >> graph[i][j];
        }
    }

    queue<p> fire_q;
    queue<p> jihoon_q;
    memset(fire_visited, -1, sizeof(fire_visited));
    memset(jihoon_visited, -1, sizeof(jihoon_visited));

    FOR(i, 0, R) {
        FOR(j, 0, C) {
            if (graph[i][j] == 'F') {
                fire_q.push({i, j});
                fire_visited[i][j] = 0;
            } else if (graph[i][j] == 'J') {
                jihoon_q.push({i, j});
                jihoon_visited[i][j] = 0;
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

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || fire_visited[ny][nx] >= 0 || graph[ny][nx] == '#') { continue; }

            fire_visited[ny][nx] = fire_visited[temp_y][temp_x] + 1;
            fire_q.push({ny, nx});
        }
    }

    while (!jihoon_q.empty()) {
        int temp_y = jihoon_q.front().first;
        int temp_x = jihoon_q.front().second;
        jihoon_q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C) {
                cout << jihoon_visited[temp_y][temp_x] + 1 << endl;
                return 0;
            }

            if (jihoon_visited[ny][nx] >= 0 || graph[ny][nx] == '#') { continue; }
            if (fire_visited[ny][nx] != -1 && fire_visited[ny][nx] <= jihoon_visited[temp_y][temp_x] + 1) { continue; }

            jihoon_visited[ny][nx] = jihoon_visited[temp_y][temp_x] + 1;
            jihoon_q.push({ny, nx});
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
} 