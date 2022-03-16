#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

struct pos { int x, y, z; };

int M, N, H;
int arr[100][100][100];
int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {-1, 1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
queue<pos> q;
int result = 0;

void bfs() {
    while (!q.empty()) {
        int z = q.front().z;
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        FOR(i, 0, 6) {
            int nz = z + dz[i];
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= N || ny < 0 || nx >= M || nx < 0 || nz >= H || nz < 0) { continue; }
            if (arr[nz][ny][nx] == 0) {
                arr[nz][ny][nx] = arr[z][y][x] + 1;
                pos temp; temp.z = nz; temp.y = ny; temp.x = nx;
                q.push(temp);
            }
        }
    }
}

int main() {
    fastio

    cin >> M >> N >> H;
    FOR(i, 0, H){
        FOR(j, 0, N) {
            FOR(k, 0, M) {
                cin >> arr[i][j][k];
                if (arr[i][j][k] == 1) {
                    pos temp; temp.z = i; temp.y = j; temp.x = k;
                    q.push(temp);
                }
            }
        }
    }


    bfs();

    FOR(i, 0, H){
        FOR(j, 0, N) {
            FOR(k, 0, M) {
                if (arr[i][j][k] == 0) {
                    cout << -1;
                    return 0;
                }

                result = max(result, arr[i][j][k]);
            }
        }
    }

    cout << result-1;

    return 0;
}