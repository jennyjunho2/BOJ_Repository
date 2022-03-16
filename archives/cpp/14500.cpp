#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, M;
int graph[500][500];
bool visited[500][500];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int max_sum;
p arr[4];

void backtrack(int depth, int y, int x) {
    if (depth == 4) {

        int temp_sum = 0;
        FOR(i, 0, 4) {
            temp_sum += graph[arr[i].first][arr[i].second];
        }

        max_sum = max(max_sum, temp_sum);
        return;
    }

    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= N || ny < 0 || nx >= M || nx < 0 || visited[ny][nx]) { continue; }

        arr[depth] = {ny, nx};
        visited[ny][nx] = true;
        backtrack(depth + 1, ny, nx);
        visited[ny][nx] = false;
    }
}
// ㅜ모양
void check1(int y, int x) {
    int temp_sum = graph[y][x] + graph[y+1][x] + graph[y][x-1] + graph[y][x+1];
    max_sum = max(max_sum, temp_sum);
}
// ㅓ모양
void check2(int y, int x) {
    int temp_sum = graph[y][x] + graph[y+1][x] + graph[y-1][x] + graph[y][x-1];
    max_sum = max(max_sum, temp_sum);
}

// ㅏ모양
void check3(int y, int x) {
    int temp_sum = graph[y][x] +graph[y+1][x] + graph[y-1][x] + graph[y][x+1];
    max_sum = max(max_sum, temp_sum);
}

// ㅗ모양
void check4(int y, int x) {
    int temp_sum = graph[y][x] + graph[y-1][x] + graph[y][x-1] + graph[y][x+1];
    max_sum = max(max_sum, temp_sum);
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            // memset(visited, 0, sizeof(visited));
            arr[0] = {i, j};
            visited[i][j] = true;
            backtrack(1, i, j);
            visited[i][j] = false;

            if (i < N-1 && j > 0 && j < M-1) { check1(i, j); }
            if (i > 0 && i < N-1 && j > 0) { check2(i, j); }
            if (i < N-1 && i > 0 && j < M-1) { check3(i, j); }
            if (i > 0 && j > 0 && j < M-1) { check4(i, j); }
        
        }
    }

    cout << max_sum;

    return 0;
}