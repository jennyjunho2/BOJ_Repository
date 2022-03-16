#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

struct pos { int x, y; };

int M, N;
int arr[1000][1000];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pos> q;
int result = 0;

void bfs() {
    while (!q.empty()) {
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= N || ny < 0 || nx >= M || nx < 0) { continue; }
            if (arr[ny][nx] == 0) {
                arr[ny][nx] = arr[y][x] + 1;
                pos temp; temp.y = ny; temp.x = nx;
                q.push(temp);
            }
        }
    }
}

int main() {
    fastio

    cin >> M >> N;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                pos temp; temp.y = i; temp.x = j;
                q.push(temp);
            }
        }
    }

    bfs();

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (arr[i][j] == 0) {
                cout << -1;
                return 0;
            }

            result = max(result, arr[i][j]);
        }
    }

    cout << result-1;

    return 0;
}