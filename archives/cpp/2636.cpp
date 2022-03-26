#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int M, N;
int cheeze[100][100];
bool visited[100][100];
int cheeze_before[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void bfs(int y, int x) {
    queue<p> q;
    q.push({y, x});
    visited[y][x] = true;

    while(!q.empty()) {
        int temp_y = q.front().first;
        int temp_x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

            if (!visited[ny][nx] && cheeze[ny][nx] == 0) {
                visited[ny][nx] = true;
                q.push({ny, nx});
            }
        }
    }
}

void melt() {
    int temp[100][100];
    memset(temp, 0, sizeof(temp));
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (cheeze[i][j] == 1) {
                FOR(k, 0, 4) {
                    int ni = i + dy[k];
                    int nj = j + dx[k];

                    if (ni < 0 || ni >= N || nj < 0 || nj >= M) { continue; }

                    if (visited[ni][nj] && cheeze[ni][nj] == 0) {
                        temp[i][j] = -1;
                        break;
                    }
                }
            }
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cheeze[i][j] += temp[i][j];
        }
    }
}

bool check_no_cheeze() {
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (cheeze[i][j] == 1) {
                return false;
            }
        }
    }
    return true;
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> cheeze[i][j];
        }
    }

    int days = 0;
    while (true) {
        days++;
        memcpy(cheeze_before, cheeze, sizeof(cheeze));
        memset(visited, false, sizeof(visited));
        bfs(0, 0);
        melt();

        if (check_no_cheeze()) { break; }
    }

    int before_cheeze = 0;
    FOR(i, 0, N){
        FOR(j, 0, M) {
            before_cheeze += cheeze_before[i][j];
        }
    }

    cout << days << endl << before_cheeze;

    return 0;
}