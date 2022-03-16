#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[50][50];
bool visited[50][50];
int M, N;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int y, int x) {
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= M || nx < 0 || ny >= N || ny < 0) {
            continue;
        }

        if (!visited[ny][nx] && arr[ny][nx] == 1) {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        int K; cin >> M >> N >> K;
        while (K--) {
            int x, y; cin >> x >> y;
            arr[y][x] = 1;
        }

        int cnt = 0;
        FOR(i, 0, N) {
            FOR(j, 0, M) {
                if (arr[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }


    return 0;
}