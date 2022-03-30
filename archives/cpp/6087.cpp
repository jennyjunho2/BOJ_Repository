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
using t = tuple<int, int, int, int>;
int W, H;
char graph[100][100];
int visited[100][100];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
vector<p> laser;

int bfs(int y, int x, int init_direction) {
    fill(&visited[0][0], &visited[0][0]+100*100, 10001);
    deque<t> q;
    q.push_back({y, x, init_direction, 0});
    visited[y][x] = 0; 

    while(!q.empty()) {
        t temp = q.front();
        int temp_y = get<0>(temp);
        int temp_x = get<1>(temp);
        int dir = get<2>(temp);
        int cost = get<3>(temp);
        q.pop_front();
        if (temp_y == laser[1].first && temp_x == laser[1].second) { break; }

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];
            int ncost = cost;
            if (dir != i) { ncost++; }

            if (ny < 0 || ny >= H || nx < 0 || nx >= W || graph[ny][nx] == '*') { continue; }

            if (visited[ny][nx] >= ncost) {
                visited[ny][nx] = ncost;
                if (dir != i) {
                    q.push_back({ny, nx, i, ncost});
                } else {
                    q.push_front({ny, nx, i, ncost});
                }
            }
        }
    }

    return visited[laser[1].first][laser[1].second];
}

int main() {fastio
    
    cin >> W >> H;
    FOR(i, 0, H) {
        FOR(j, 0, W) {
            cin >> graph[i][j];

            if (graph[i][j] == 'C') {
                laser.push_back({i, j});
            }
        }
    }

    int result = INT_MAX;
    FOR(i, 0, 4) {
        result = min(result, bfs(laser[0].first, laser[0].second, i));
    }

    cout << result;

    return 0;
}