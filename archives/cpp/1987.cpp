#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int R, C;
char graph[20][20];
bool visited[20][20];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool alphabet[26];
int max_cnt;

void dfs(int y, int x, int depth) {
    
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx]) { continue; }

        if (!alphabet[graph[ny][nx]-'A']) {
            alphabet[graph[ny][nx]-'A'] = true;;
            visited[ny][nx] = true;
            dfs(ny, nx, depth + 1);
            visited[ny][nx] = false;
            alphabet[graph[ny][nx]-'A'] = false;;
        }
    }

    max_cnt = max(max_cnt, depth);
}

int main() {
    fastio

    cin >> R >> C;
    FOR(i, 0, R) {
        string word; cin >> word;
        FOR(j, 0, C) {
            graph[i][j] = word[j];
        }
    }
    
    alphabet[graph[0][0] - 'A'] = true;
    visited[0][0] = true;
    dfs(0, 0, 1);

    cout << max_cnt;

    return 0;
} 