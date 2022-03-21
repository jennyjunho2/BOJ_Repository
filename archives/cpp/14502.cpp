#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos{ int y, x; };
int N, M;
int graph[8][8];
vector<pos> empty_pos;
bool visited[8][8];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

int bfs() {
    queue<pos> q;
    fill(&visited[0][0], &visited[0][0]+8*8, false);
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] == 2) {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    while(!q.empty()) {
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

            if (!visited[ny][nx] && graph[ny][nx] != 1) {
                q.push({ny, nx});
                visited[ny][nx] = true;
            }
        }
    }

    int safe_area = 0;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (!visited[i][j] && graph[i][j] == 0) {
                safe_area++;
            }
        }
    }

    return safe_area;
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR (j, 0, M) {
            cin >> graph[i][j];
            if (graph[i][j] == 0) {
                empty_pos.push_back({i, j});
            }
        }
    }

    int empty_pos_size = empty_pos.size();
    int max_safearea = -1;
    FOR(i, 0, empty_pos_size-2) {
        pos temp_i = empty_pos[i];
        graph[temp_i.y][temp_i.x] = 1;

        FOR(j, i+1, empty_pos_size-1) {
            pos temp_j = empty_pos[j];
            graph[temp_j.y][temp_j.x] = 1;
            FOR(k, j+1, empty_pos_size) {
                pos temp_k = empty_pos[k];
                graph[temp_k.y][temp_k.x] = 1;

                max_safearea = max(max_safearea, bfs());

                graph[temp_k.y][temp_k.x] = 0;
            }
            graph[temp_j.y][temp_j.x] = 0;
        }

        graph[temp_i.y][temp_i.x] = 0;
    }

    cout << max_safearea;

    return 0;
} 