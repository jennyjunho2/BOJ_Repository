#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using t = tuple<int, int, int>;
int L, R, C;
char graph[30][30][30];
int visited[30][30][30];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
int start_z, start_y, start_x;
int exit_z, exit_y, exit_x;

int main() {fastio
    
    while (true) {
        cin >> L >> R >> C;
        if (L == 0 && R == 0 && C == 0) { break; }
        FOR(i, 0, L){
            FOR(j, 0, R) {
                FOR(k, 0, C) {
                    cin >> graph[i][j][k];

                    if (graph[i][j][k] == 'S') {
                        start_z = i; start_y = j; start_x = k;
                    } else if (graph[i][j][k] == 'E') {
                        exit_z = i; exit_y = j; exit_x = k;
                    }
                }
            }
        }

        // BFS
        queue<t> q;
        fill(&visited[0][0][0], &visited[0][0][0]+30*30*30, -1);
        q.push({start_z, start_y, start_x});
        visited[start_z][start_y][start_x] = 0;

        while(!q.empty()) {
            t temp = q.front();
            int z = get<0>(temp);
            int y = get<1>(temp);
            int x = get<2>(temp);
            q.pop();

            if (z == exit_z && y == exit_y && x == exit_x) { break; }

            FOR(i, 0, 6) {
                int nz = z + dz[i];
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (nz < 0 || nz >= L || ny < 0 || ny >= R || nx < 0 || nx >= C) { continue; }

                if (graph[nz][ny][nx] != '#' && visited[nz][ny][nx] == -1) {
                    visited[nz][ny][nx] = visited[z][y][x] + 1;
                    q.push({nz, ny, nx});
                }
            }
        }

        if (visited[exit_z][exit_y][exit_x] == -1) {
            cout << "Trapped!" << endl;
        } else {
            cout << "Escaped in " << visited[exit_z][exit_y][exit_x] << " minute(s)." << endl;
        }

    }

    return 0;
}
