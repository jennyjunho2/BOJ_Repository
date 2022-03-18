#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using t = tuple<int, int, int>;
int N, M;
int graph[1000][1000];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int visited[1000][1000][2];

int bfs() {
    queue<t> q;
    visited[0][0][1] = 1;
    q.push({0, 0, 1});
    while (!q.empty()) {
        t temp = q.front();
        int y = get<0>(temp);
        int x = get<1>(temp);
        int can_wall_break = get<2>(temp);
        q.pop();

        if (y == N-1 && x == M-1) {
            return visited[y][x][can_wall_break];
        }

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];  

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

            if (graph[ny][nx] == 1 && can_wall_break) {
                visited[ny][nx][0] = visited[y][x][1] + 1;
                q.push({ny, nx, 0});
            } else if (graph[ny][nx] == 0 && visited[ny][nx][can_wall_break] == 0) {
                visited[ny][nx][can_wall_break] = visited[y][x][can_wall_break] + 1;
                q.push({ny, nx, can_wall_break});
            }
        }
    }

    return -1;
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, M) {
            graph[i][j] = word[j] - '0';
        }
    }

    cout << bfs();

    return 0;
}