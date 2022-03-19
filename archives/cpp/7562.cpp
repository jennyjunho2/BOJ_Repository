#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int L, start_y, start_x, end_y, end_x;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int visited[300][300];

void dfs() {
    queue<p> q;
    q.push({start_y, start_x});
    visited[start_y][start_x] = 0;

    while (!q.empty()) {
        p temp = q.front();
        int temp_y = get<0>(temp);
        int temp_x = get<1>(temp);
        q.pop();

        if (temp_y == end_y && temp_x == end_x) {
            break;
        }

        FOR(i, 0, 8) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= L || nx < 0 || nx >= L) { continue; }

            if (visited[ny][nx] == -1) {
                visited[ny][nx] = visited[temp_y][temp_x] + 1;
                q.push({ny, nx});
            }
        }
    }

    return;
}

int main() {
    fastio
    
    int T; cin >> T;
    while (T--) {
        memset(visited, -1, sizeof(visited));
        cin >> L;
        cin >> start_y >> start_x;
        cin >> end_y >> end_x;
        if (start_y == end_y && start_x == end_x) {
            cout << 0 << endl;
        } else {
            dfs();
            cout << visited[end_y][end_x] << endl;
        }
    }

    return 0;
} 