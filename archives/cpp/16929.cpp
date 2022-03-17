#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos {int y, x; };
char graph[50][50];
bool visited[50][50];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int N, M;
bool is_cycle;
pos start_pos;

void dfs(int y, int x, char shape, int depth) {
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= 0 && ny < N && nx >= 0 && nx < M && !visited[ny][nx] && graph[ny][nx] == shape) {
            dfs(ny, nx, shape, depth+1);
        } else if (start_pos.y == ny && start_pos.x == nx && depth >= 4) {
            cout << "Yes";
            exit(0);
        }
    }
    visited[y][x] = false;
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, M) {
            graph[i][j] = word[j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (!visited[i][j]) {
                start_pos.y = i; start_pos.x = j;
                char ch = graph[i][j];
                dfs(i, j, ch, 1);
                visited[i][j] = true;
            }
        }
    }

    cout << "No";

    return 0;
}