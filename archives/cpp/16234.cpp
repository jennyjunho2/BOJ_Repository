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
int N, L, R;
int graph[50][50];
int after_graph[50][50];
bool visited[50][50];
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};
int union_sum = 0;
int union_cnt = 0;

void bfs(int y, int x) {
    queue<p> q;
    vector<p> change;

    q.push({y, x});
    visited[y][x] = true;
    union_sum += graph[y][x];
    change.push_back({y, x});
    while (!q.empty()) {
        int temp_y = q.front().first;
        int temp_x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= N) { continue; }
            if (!visited[ny][nx] && abs(graph[ny][nx] - graph[temp_y][temp_x]) >= L && abs(graph[ny][nx] - graph[temp_y][temp_x]) <= R) {
                q.push({ny, nx});
                visited[ny][nx] = true;
                union_cnt++;
                union_sum += graph[ny][nx];
                change.push_back({ny, nx});
            }
        }
    }

    for (p pos: change) {
        after_graph[pos.first][pos.second] = union_sum / union_cnt;
    }
}

bool cmp() {
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (graph[i][j] != after_graph[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() { fastio

    cin >> N >> L >> R;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }

    int days = 0;
    while (true) {
        memset(visited, false, sizeof(visited));
        FOR(i, 0, N) {
            FOR(j, 0, N) {
                if (!visited[i][j]) {
                    union_sum = 0; union_cnt = 1;
                    bfs(i, j);
                }
            }
        }

        if (cmp()) { break; }
        days++;
        memcpy(graph, after_graph, sizeof(int)*50*50);
    }

    cout << days;
    

    return 0;
}