#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
// https://www.acmicpc.net/problem/1520
int N, M;
int graph[500][500];
bool visited[500][500];
int dx[3] = {-1, 1, 0};
int dy[3] = {0, 0, 1};
int total_cnt = 0;

void dfs(int y, int x) {
    visited[y][x] = true;
    if (y == N-1 && x == M-1) {
        total_cnt++;
        return;
    }

    FOR(i, 0, 3) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) { continue; }

        if (!visited[ny][nx]) {
            dfs(ny, nx);
        }
    }
    
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    dfs(0, 0);

    cout << total_cnt;

    return 0;
}