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
int graph[100][100];
int visited[100][100];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main() {fastio

    cin >> M >> N;
    FOR(i, 0, N) {
        string S; cin >> S;
        FOR(j, 0, M) {
            graph[i][j] = S[j] - '0';
        }
    }

    memset(visited, -1, sizeof(visited));
    deque<p> dq;
    visited[0][0] = 0;
    dq.push_front({0, 0});

    while(!dq.empty()) {
        int y = dq.front().first;
        int x = dq.front().second;
        dq.pop_front();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] != -1) { continue; }

            if (graph[ny][nx] == 0) {
                visited[ny][nx] = visited[y][x];
                dq.push_front({ny, nx});
            } else if (graph[ny][nx] == 1) {
                visited[ny][nx] = visited[y][x] + 1;
                dq.push_back({ny, nx});
            }
        }
    }

    cout << visited[N-1][M-1];

    return 0;
}