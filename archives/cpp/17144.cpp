#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos{ int y, x;};
int R, C, T;
int graph[50][50];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
pair<int, int> cleaner[2];

void process1() {
    int temp[50][50];
    fill(&temp[0][0], &temp[0][0]+50*50, 0);
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            if (graph[i][j] > 0) {
                FOR(k, 0, 4) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];

                    if (ny < 0 || ny >= R || nx < 0 || nx >= C || graph[ny][nx] == -1) { continue; }

                    temp[ny][nx] += graph[i][j]/5;
                    temp[i][j] -= graph[i][j]/5;
                }
            }
        }
    }

    FOR(i, 0, R) {
        FOR(j, 0, C) {
            graph[i][j] += temp[i][j];
        }
    }
}

void process2() {
    FOR(idx, 0, 2) {
        if (idx == 0) {
            for (int i = cleaner[idx].first-1; i > 0; i--) {
                graph[i][0] = graph[i-1][0];
            }

            for (int i = 0; i < C-1; i++) {
                graph[0][i] = graph[0][i+1];
            }

            for (int i = 1; i <= cleaner[idx].first; i++) {
                graph[i-1][C-1] = graph[i][C-1];
            }

            for (int i = C-1; i > 1; i--) {
                graph[cleaner[idx].first][i] = graph[cleaner[idx].first][i-1];
            }

            graph[cleaner[idx].first][1] = 0;
        } else {
                for (int i = cleaner[idx].first+1; i < R-1; i++) {
                    graph[i][0] = graph[i+1][0];
                }

                for (int i = 0; i < C-1; i++) {
                    graph[R-1][i] = graph[R-1][i+1];
                }

                for (int i = R-1; i >= cleaner[idx].first; i--) {
                    graph[i][C-1] = graph[i-1][C-1];
                }

                for (int i = C-1; i >= 1; i--) {
                    graph[cleaner[idx].first][i] = graph[cleaner[idx].first][i-1];
                }

                graph[cleaner[idx].first][1] = 0;
            }
    } 

}

int main() { fastio

    cin >> R >> C >> T;
    int idx = 0;
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            cin >> graph[i][j];

            if (graph[i][j] == -1) {
                cleaner[idx].first = i;
                cleaner[idx].second = j;
                idx++;
            }
        }
    }

    while (T--) {
        process1();
        process2();
    }

    int total_dust = 0;
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            if (graph[i][j] > 0) {
                total_dust += graph[i][j];
            }
        }
    }

    cout << total_dust;

    return 0;
} 