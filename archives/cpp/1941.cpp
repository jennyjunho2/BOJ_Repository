#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
char graph[5][5];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
bool backtrack_visited[25];
bool dfs_visited[5][5];
int dfs_temp[5][5]; 
int arr[7];
int total_cnt;

void dfs(int y, int x) {
    dfs_visited[y][x] = true;
    FOR(i, 0, 4) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= 5 || ny < 0 || nx >= 5 || nx < 0) { continue; }

        if (!dfs_visited[ny][nx] && dfs_temp[ny][nx] == 1) {
            dfs(ny, nx);
        }
    }
}

void check_arr() {
    vector<char> v;
    memset(dfs_temp, 0, sizeof(dfs_temp));

    FOR(i, 0, 7) { 
        int N = arr[i];
        dfs_temp[N/5][N%5] = 1;
        v.push_back(graph[N/5][N%5]);
    }

    int S_cnt = 0, Y_cnt = 0;
    for (auto i: v) {
        if (i == 'S') { S_cnt++; }
        else {Y_cnt++; }
    }

    if (S_cnt <= Y_cnt) { return; }

    int dfs_cnt = 0;
    memset(dfs_visited, 0, sizeof(dfs_visited));
    FOR(i, 0, 5) {
        FOR(j, 0, 5) {
            if (dfs_temp[i][j] == 1 && !dfs_visited[i][j]) {
                dfs_cnt++;
                if (dfs_cnt >= 2) {
                    return;
                }
                dfs(i, j);
            }
        }
    }
    
    total_cnt++;
    return;
}

void backtrack(int depth, int min_idx) {
    if (depth == 7) {
        check_arr();
    }

    FOR(i, min_idx, 25) {
        if(!backtrack_visited[i]) {
            arr[depth] = i;
            backtrack_visited[i] = true;
            backtrack(depth + 1, i);
            backtrack_visited[i] = false;
        }
    }

    return;
}

int main() {
    fastio

    FOR(i, 0, 5) {
        string word; cin >> word;
        FOR(j, 0, 5) {
            graph[i][j] = word[j];
        }
    }

    backtrack(0, 0);

    cout << total_cnt;

    return 0;
}