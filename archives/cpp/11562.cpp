#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
int graph[251][251];
int n, m, q;

int main() { fastio

    cin >> n >> m;
    fill(&graph[0][0], &graph[0][0]+251*251, INF);
    FOR(i, 1, n+1) { graph[i][i] = 0; }

    FOR(i, 0, m) {
        int u, v, b; cin >> u >> v >> b;
        if (b == 1) {
            graph[u][v] = graph[v][u] = 0;
        } else {
            graph[u][v] = 0;
            graph[v][u] = 1;
        }
    }

    FOR(k, 1, n+1) {
        FOR(i, 1, n+1) {
            FOR(j, 1, n+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
    
    cin >> q;
    FOR(i, 0, q) {
        int x, y; cin >> x >> y;
        cout << graph[x][y] << endl;
    }

    return 0;
}