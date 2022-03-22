#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, M;
int graph[100][100];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool visited[100][100];

void check_inside(int y, int x) {
    memset(visited, 0, sizeof(visited));
    queue<p> q;

    q.push({y, x});
    visited[y][x] = true;
    
    while (!q.empty()) {
        int temp_y = q.front().first;
        int temp_x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx]) { continue; }

            if (graph[ny][nx] == 0) {
                q.push({ny, nx});
                visited[ny][nx] = true;
            }
        }
    }
}

void melt_cheeze() {
    bool temp[100][100];
    memset(temp, 0, sizeof(temp));

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] == 1) {
                int zero_cnt = 0;
                FOR(k, 0, 4) {
                    int ni = i + dy[k];
                    int nj = j + dx[k];
                    
                    if (ni < 0 || ni >= N || nj < 0 || nj >= M) { continue; }

                    if (graph[ni][nj] == 0 && visited[ni][nj]) {
                        zero_cnt++;
                    }
                }

                if (zero_cnt >= 2) {
                    temp[i][j] = true;
                }
            }
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (temp[i][j]) {
                graph[i][j] = 0;
            }
        }
    }
}

bool check_all_zero() {
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    int time = 0;
    while (true) {
        if(check_all_zero()) { break; }
        check_inside(0, 0);
        melt_cheeze();
        time++;
    }

    cout << time;

    return 0;
} 