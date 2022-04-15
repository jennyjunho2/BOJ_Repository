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
int N, K;
int graph[101][101];

int main() { fastio

    fill(&graph[0][0], &graph[0][0]+101*101, INF);
    FOR(i, 1, N+1) { graph[i][i] = 0; }

    cin >> N >> K;
    FOR(i, 0, K) {
        int x, y; cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }

    FOR(k, 1, N+1) {
        FOR(i, 1, N+1) {
            FOR(j, 1, N+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    FOR(i, 1, N+1) {
        FOR(j, 1, N+1) {
            if (graph[i][j] > 6) {
                cout << "Big World!";
                return 0;
            }
        }
    }

    cout << "Small World!";

    return 0;
}