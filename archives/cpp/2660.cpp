#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int graph[51][51];

int main() {
    fastio

    int N; cin >> N;
    fill(&graph[0][0], &graph[0][0] + 50*50, 99999);
    FOR(i, 1, N+1) {
        graph[i][i] = 0;
    }
    while (true) {
        int a, b; cin >> a >> b;
        if (a == -1) { break; }

        graph[a][b] = graph[b][a] = 1;
    }

    FOR(k, 1, N+1) {
        FOR(i, 1, N+1) {
            FOR(j, 1, N+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    int min_num = 999999;
    FOR(i, 1, N+1) {
        int temp_num = 0;
        FOR(j, 1, N+1) {
            temp_num = max(temp_num, graph[i][j]);
        }
        min_num = min(min_num, temp_num);
    }

    vector<int> chief;
    FOR(i, 1, N+1) {
        int temp_num = 0;
        FOR(j, 1, N+1) {
            temp_num = max(temp_num, graph[i][j]);
        }

        if (temp_num == min_num) {
            chief.push_back(i);
        }
    }

    cout << min_num << ' ' << chief.size() << endl;
    for (auto i: chief) { cout << i << ' '; }

    return 0;
}