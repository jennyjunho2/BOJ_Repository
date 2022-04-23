#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, M;
int graph[8][8];
int graph2[8][8];
p dir[4] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
vector<p> cctv_pos;
vector<int> angle;
bool visited[8][8][4];
int ans = INT_MAX;

int count_zero() {
    int result = 0;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (graph2[i][j] == 0) {
                result++;
            }
        }
    }

    return result;
}

void backtrack(int depth) {

    if (depth == cctv_pos.size()) {
        int angle_size = angle.size();
        FOR(i, 0, angle_size) {
            int y = cctv_pos[i].first;
            int x = cctv_pos[i].second;

            FOR(j, 0, 4) {
                if (visited[y][x][j]) {
                    int ny = y + dir[(angle[i]+j) % 4].first;
                    int nx = x + dir[(angle[i]+j) % 4].second;
                    while (true) {
                        if (ny < 0 || ny >= N || nx < 0 || nx >= M || graph2[ny][nx] == 6) { break; }

                        if (graph2[ny][nx] == 0) { graph2[ny][nx] = -1; }

                        ny += dir[(angle[i]+j) % 4].first;
                        nx += dir[(angle[i]+j) % 4].second;
                    }
                }
            }
        }

        ans = min(ans, count_zero());
        memmove(&graph2[0][0], &graph[0][0], sizeof(graph));
        return;
    }

    FOR(i, 0, 4){
        angle.push_back(i);
        backtrack(depth + 1);
        angle.pop_back();
    }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];

            if (graph[i][j] >= 1 && graph[i][j] <= 5) {
                cctv_pos.push_back({i, j});

                switch(graph[i][j]) {
                    case 1:
                        visited[i][j][0] = true;
                        break;
                    case 2:
                        visited[i][j][0] = true;
                        visited[i][j][2] = true;
                        break;
                    case 3:
                        visited[i][j][0] = true;
                        visited[i][j][1] = true;
                        break;
                    case 4:
                        visited[i][j][0] = true;
                        visited[i][j][1] = true;
                        visited[i][j][2] = true;
                        break;
                    case 5:
                        visited[i][j][0] = true;
                        visited[i][j][1] = true;
                        visited[i][j][2] = true;
                        visited[i][j][3] = true;
                        break;
                }
            }
        }
    }

    memmove(&graph2[0][0], &graph[0][0], sizeof(graph));

    backtrack(0);

    cout << ans;

    return 0;
}