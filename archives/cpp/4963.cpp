#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int w, h;
int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, 1, -1};
int arr[50][50];
bool visited[50][50];

void dfs(int y, int x) {
    visited[y][x] = true;
    FOR(i, 0, 8) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= h || ny < 0 || nx >= w || nx < 0) { continue; }

        if (!visited[ny][nx] && arr[ny][nx] == 1) {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio
    
    while (true) {
        cin >> w >> h;
        if (w == 0 && h == 0) { break; }

        memset(visited, 0, sizeof(visited));
        FOR(i, 0, h) {
            FOR(j, 0, w) {
                cin >> arr[i][j];
            }
        }

        int cnt = 0;
        FOR(i, 0, h) {
            FOR(j, 0, w) {
                if (arr[i][j] == 1 && !visited[i][j]) {
                    cnt++;
                    dfs(i, j);
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
} 