#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n, m;
int graph[101][101];

int main() {
    fastio
    
    fill(&graph[0][0], &graph[0][0]+101*101, 999999);
    cin >> n; cin >> m;
    FOR(i, 0, m) {
        int a, b, c; cin >> a >> b >> c;
        graph[a][b] = min(graph[a][b], c);
    }

    FOR(k, 1, n+1) {
        FOR(i, 1, n+1) {
            FOR(j, 1, n+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    FOR(i, 1, n+1) {
        FOR(j, 1, n+1) {
            if (graph[i][j] == 999999 || i == j) {
                cout << 0 << ' ';
            } else {
                cout << graph[i][j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
} 