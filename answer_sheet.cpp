#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
//https://www.acmicpc.net/problem/11780
#define INF int(1e9)
int graph[101][101];
int n, m;

int main() {fastio

    fill(&graph[0][0], &graph[0][0] + 101*101, INF);
    FOR(i, 1, 101) { graph[i][i] = 0;}
    cin >> n >> m;
    FOR(i, 0, m) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start][end] = min(graph[start][end], cost);
    }

    FOR(k, 1, n+1) {
        FOR(i, 1, n+1) {
            FOR(j, 1, n+1) {
                graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j]);
            }
        }
    }

    FOR(i, 1, n+1) {
        FOR(j, 1, n+1) {
            cout << (graph[i][j] == INF ? 0 : graph[i][j]) << ' ';
        } cout << endl;
    }

    FOR(i, 1, n+1) {
        FOR(j, 1, n+1) {
            if (i == j || graph[i][j] == INF) {
                cout << 0 << endl;
            } else {
                continue;
                //_TODO
            }
        }
    }

    return 0;
}
