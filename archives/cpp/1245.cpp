#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, M;
int graph[100][70];
bool visited[100][70];
int dy[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
vector<p> peaks;

void dfs(int y, int x) {
    visited[y][x] = true;
    FOR(i, 0, 8) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx]) { continue; }

        if (graph[ny][nx] <= graph[y][x]) {
            dfs(ny, nx);
        }
    }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) { 
        FOR(j, 0, M) {
            cin >> graph[i][j];

            if (graph[i][j] > 0) {
                peaks.push_back({i, j});
            }
        }
    }

    sort(peaks.begin(), peaks.end(), [](const p& a, const p& b) {
        return graph[a.first][a.second] > graph[b.first][b.second];
    });

    int cnt = 0;
    for (auto i: peaks) {
        if (!visited[i.first][i.second]) {
            cnt++;
            dfs(i.first, i.second);
        }
    }

    cout << cnt;

    return 0;
}