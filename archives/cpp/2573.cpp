#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int water[300][300];
bool visited[300][300];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int chunk = 0;

void melt() {

    int temp[300][300];

    FOR(y, 1, N-1) {
        FOR(x, 1, M-1) {
            int cnt = 0;
            FOR(k, 0, 4) {
                int ny = y + dy[k];
                int nx = x + dx[k];
                if (water[ny][nx] == 0) { cnt++; }
            }
            temp[y][x] = cnt;
        }
    }

    FOR(y, 1, N-1)  {
        FOR(x, 1, M-1) {
            water[y][x] = max(0, water[y][x] - temp[y][x]);
        }
    }
}

bool check_all_melt() {
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (water[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void dfs(int y, int x) {
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

        if (!visited[ny][nx]) {
            dfs(ny, nx);
        }   
    }
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> water[i][j];
        }
    }

    int days = 0;
    while (true) {
        bool is_all_melt = check_all_melt();
        if (is_all_melt) { cout << 0; return 0; }

        memset(visited, 0, sizeof(visited));
        chunk = 0;
        FOR(i, 0, N) {
            FOR(j, 0, M) {
                if (water[i][j] == 0) {
                    visited[i][j] = true;
                }
            }
        }

        FOR(i, 0, N) {
            FOR(j, 0, M) {
                if (water[i][j] != 0 && !visited[i][j]) {
                    chunk++;
                    dfs(i, j);
                }
            }
        }

        if (chunk >= 2) {
            cout << days; return 0;
        }

        days++; melt();
    }

    return 0;
}