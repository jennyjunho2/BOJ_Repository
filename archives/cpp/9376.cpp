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
int h, w;
char graph[102][102];
int visited[102][102];
int visited_robber1[102][102];
int visited_robber2[102][102];
int visited_sang[102][102];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};
vector<p> robber;

void bfs(int y, int x) {
    memset(visited, -1, sizeof(visited));
    deque<p> dq;

    dq.push_back({y, x});
    visited[y][x] = 0;

    while(!dq.empty()) {
        int temp_y = dq.front().first;
        int temp_x = dq.front().second;
        dq.pop_front();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= h+2 || nx < 0 || nx >= w+2 || visited[ny][nx] != -1) { continue; }

            if (graph[ny][nx] == '.' || graph[ny][nx] == '$') {
                visited[ny][nx] = visited[temp_y][temp_x];
                dq.push_front({ny, nx});
            } else if (graph[ny][nx] == '#') {
                visited[ny][nx] = visited[temp_y][temp_x] + 1;
                dq.push_back({ny, nx});
            }
        }
    }
}

int main() {fastio

    TC {
        fill(&graph[0][0], &graph[0][0]+102*102, '.');
        robber.clear();
        cin >> h >> w;
        FOR(i, 1, h+1) {
            FOR(j, 1, w+1) {
                cin >> graph[i][j];

                if (graph[i][j] == '$') {
                    robber.push_back({i, j});
                }
            }
        }

        bfs(robber[0].first, robber[0].second);
        memcpy(visited_robber1, visited, sizeof(visited));
        bfs(robber[1].first, robber[1].second);
        memcpy(visited_robber2, visited, sizeof(visited));
        bfs(0, 0);
        memcpy(visited_sang, visited, sizeof(visited));

        int ans = 987654321;
        FOR(i, 0, h+2) {
            FOR(j, 0, w+2) {
                if (visited_sang[i][j] != -1 && visited_robber1[i][j] != -1 && visited_robber2[i][j] != -1) {
                    int temp = visited_sang[i][j] + visited_robber1[i][j] + visited_robber2[i][j];
                    if (graph[i][j] == '*') { continue; }

                    if (graph[i][j] == '#') {
                        temp -= 2;
                    }

                    ans = min(ans, temp);
                }
            }
        }

        cout << ans << endl;
    }


    return 0;
}