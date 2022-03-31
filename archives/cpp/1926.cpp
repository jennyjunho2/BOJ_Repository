#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n, m;
int graph[500][500];
int visited[500][500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int num = 1;

void dfs(int y, int x) {
    visited[y][x] = num;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= m) { continue; }

        if (visited[ny][nx] == -1 && graph[ny][nx] == 1) {
            num++;
            dfs(ny, nx);
        }
    }
}

int main() {fastio
    
    cin >> n >> m;
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> graph[i][j];
        }
    }

    memset(visited, -1, sizeof(visited));
    int pic_cnt = 0;
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if (graph[i][j] == 1 && visited[i][j] == -1) {
                num = 1;
                pic_cnt++;
                dfs(i, j);
            }
        }
    }

    cout << pic_cnt << endl;
    cout << max(*max_element(&visited[0][0], &visited[0][0]+500*500), 0);

    return 0;
}