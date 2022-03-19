#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
char arr[100][100];
int visited[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int multiplier;
// 1+3+5+ ... + 2N-1 = N^2

void dfs(int y, int x, char color) {
    visited[y][x] = multiplier;

    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= M || nx < 0 || nx >= N) { continue; }

        if (!visited[ny][nx] && arr[ny][nx] == color) {
            multiplier += 2;
            dfs(ny, nx, color);
        }
    }
}

int main() {
    fastio
    
    cin >> N >> M;
    FOR(i, 0, M) {
        FOR(j, 0, N) {
            cin >> arr[i][j];
        }
    }

    FOR(i, 0, M) {
        FOR(j, 0, N) {
            if (!visited[i][j]) {
                multiplier = 1;
                char ch = arr[i][j];
                dfs(i, j, ch);
            }
        }
    }

    int B_power = 0, W_power = 0;
    FOR(i, 0, M) {
        FOR(j, 0, N) {
            if (arr[i][j] == 'W') {
                W_power += visited[i][j];
            } else {
                B_power += visited[i][j];
            }
        }
    }

    cout << W_power << ' ' << B_power;

    return 0;
} 