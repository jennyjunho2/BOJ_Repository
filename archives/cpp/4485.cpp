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
#define INF int(1e9)
int N;
int graph[125][125];
int visited[125][125];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

int main() { fastio

    int cnt = 1;
    while (true) {
        cin >> N;
        if (N == 0) { break; }

        fill(&visited[0][0], &visited[0][0]+125*125, INF);
        FOR(i, 0, N) {
            FOR(j, 0, N) {
                cin >> graph[i][j];
            }
        }

        queue<p> q;
        q.push({0, 0});
        visited[0][0] = graph[0][0];

        while(!q.empty()) {
            int y = q.front().first;
            int x = q.front().second;
            q.pop();

            FOR(i, 0, 4) {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || ny >= N || nx < 0 || nx >= N) { continue; }

                if (visited[ny][nx] > visited[y][x] + graph[ny][nx]) {
                    visited[ny][nx] = visited[y][x] + graph[ny][nx];
                    q.push({ny, nx});
                }
            }
        }
        

        cout << "Problem " << cnt << ": ";
        cout << visited[N-1][N-1] << endl;

        cnt++;
    }

    return 0;
} 