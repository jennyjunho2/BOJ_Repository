#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
int graph[101][101];

int main() {
    fastio

    cin >> N >> M;
    memset(graph, 10000, sizeof(graph));

    FOR(i, 1, N+1) {
        graph[i][i] = 0;
    }

    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // Floyd-Warshall
    FOR(k, 1, N+1) {
        FOR(i, 1, N+1) {
            FOR(j, 1, N+1) {
                graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j]);
            }
        }
    }

    int min_sum = INT_MAX;
    int min_idx;
    for (int i = N; i >= 1; i--) {
        int sum = 0;
        FOR(j, 1, N+1) {
            sum += graph[i][j];
        }

        if (min_sum >= sum) {
            min_idx = i;
            min_sum = sum;
        }
    }

    cout << min_idx;

    return 0;
}