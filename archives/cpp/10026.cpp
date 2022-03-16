#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
char arr[100][100];
bool visited[100][100];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int first, second;

void dfs(int y, int x) {
    char ch = arr[y][x];
    visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= N || ny < 0 || nx >= N || nx < 0) { continue; }

        if (!visited[ny][nx] && ch == arr[ny][nx]) {
            dfs(ny, nx);
        }
    }
    return;
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, N) {
            arr[i][j] = word[j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (!visited[i][j]) {
                first++;
                dfs(i, j);
            }
        }
    }

    memset(visited, 0, sizeof(visited));
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (arr[i][j] == 'G') {
                arr[i][j] = 'R';
            }
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (!visited[i][j]) {
                second++;
                dfs(i, j);
            }
        }
    }

    cout << first << ' ' << second;

    return 0;
}