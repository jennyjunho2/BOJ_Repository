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
char graph[500][500];
int visited[500][500];
int dx[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy[8] = {1, -1, -1, 1, 0, 0, -1, 1};

int main() {fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    memset(visited, -1, sizeof(visited));
    char init_start = graph[0][0];
    if (init_start == '/') {
        graph[0][0] = '\\';
    }
    deque<p> dq;
    dq.push_back({0, 0});
    visited[0][0] = 0;

    while(!dq.empty()) {
        int y = dq.front().first;
        int x = dq.front().second;
        dq.pop_front();

        if (graph[y][x] == '\\') {
            FOR(i, 2, 8) {
                int ny = y + dy[i];
                int nx = x + dx[i];
                
                if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] != -1) { continue; }

                if ((graph[ny][nx] != graph[y][x] && i <= 5) || (graph[ny][nx] == graph[y][x] && i > 5)) {
                    visited[ny][nx] = visited[y][x];
                    dq.push_front({ny, nx});
                } else {
                    visited[ny][nx] = visited[y][x] + 1;
                    dq.push_back({ny, nx});

                    if (graph[ny][nx] == '/') {
                        graph[ny][nx] = '\\';
                    } else {
                        graph[ny][nx] = '/';
                    }
                }
            }
        } else {
            FOR(i, 0, 6) {
                int ny = y + dy[i];
                int nx = x + dx[i];
                
                if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] != -1) { continue; }

                if ((graph[ny][nx] != graph[y][x] && i >= 2) || (graph[ny][nx] == graph[y][x] && i < 2)) {
                    visited[ny][nx] = visited[y][x];
                    dq.push_front({ny, nx});
                } else {
                    visited[ny][nx] = visited[y][x] + 1;
                    dq.push_back({ny, nx});

                    if (graph[ny][nx] == '/') {
                        graph[ny][nx] = '\\';
                    } else {
                        graph[ny][nx] = '/';
                    }
                }
            }
        }
    }

    

    if (graph[N-1][M-1] == '/') {
        cout << "NO SOLUTION";
    } else {
        if (init_start == '/') {
            visited[N-1][M-1]++;
        }
        cout << visited[N-1][M-1];
    }

    return 0;
}