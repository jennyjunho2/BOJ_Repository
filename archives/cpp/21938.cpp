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
int N, M, T;
double graph[1000][1000];
bool visited[1000][1000];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void dfs(int sy, int sx) {
    visited[sy][sx] = true;
    FOR(i, 0, 4) {
        int ny = sy + dy[i];
        int nx = sx + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx]) { continue; }

        if (graph[ny][nx] == 255.0) {
            dfs(ny, nx);
        }
    }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M){
            int a, b, c; cin >> a >> b >> c;
            graph[i][j] = (a+b+c)/3;
        }
    }
    cin >> T;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            graph[i][j] = (graph[i][j] >= T ? 255.0 : 0.0);
        }
    }

    int cnt = 0;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (!visited[i][j] && graph[i][j] == 255.0){
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt;

    return 0;
}