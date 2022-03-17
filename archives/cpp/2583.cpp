#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int M, N, K;
int paper[100][100];
bool visited[100][100];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<int> areas;
int temp;

void dfs(int y, int x) {
    visited[y][x] = true;
    temp++;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= M || nx < 0 || nx >= N) { continue; }

        if (!visited[ny][nx]) {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio

    cin >> M >> N >> K;
    while (K--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        FOR(y, y1, y2) {
            FOR(x, x1, x2) {
                paper[y][x] = 1;
                visited[y][x] = true;
            }
        }
    }

    int chunk = 0;
    FOR(i, 0, M) {
        FOR(j, 0, N) {
            if (paper[i][j] == 0 && !visited[i][j]) {
                temp = 0;
                chunk++;
                dfs(i, j);
                areas.push_back(temp);
            }
        }
    }

    sort(areas.begin(), areas.end());
    cout << chunk << endl;
    for (auto i: areas) {
        cout << i << ' ';
    }

    return 0;
}