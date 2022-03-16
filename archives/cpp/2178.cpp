#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
int maze[100][100];
int visited[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
using p = pair<pair<int, int>, int>;
queue<p> q;

int bfs(int y, int x) {
    visited[y][x] = 100;
    q.push({{y, x}, 1});
    while (!q.empty()) {
        int temp_y = q.front().first.first;
        int temp_x = q.front().first.second;
        int temp_distance = q.front().second;
        q.pop();
        FOR(i, 0, 4) {
            int nx = temp_x + dx[i];
            int ny = temp_y + dy[i];
            if (ny >= N || ny < 0 || nx >= M || nx < 0) {
                continue;
            }

            if (ny == N-1 && nx == M-1) {
                return temp_distance;
            }

            if (!visited[ny][nx] && maze[ny][nx] == 1) {
                q.push({{ny, nx}, temp_distance+1});
                visited[ny][nx] = temp_distance+1;
            }
        }
    }
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, M) {
            maze[i][j] = word[j] - '0';
        }
    }

    int result = bfs(0, 0);
    cout << result+1;

    return 0;
}