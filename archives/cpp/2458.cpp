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
int N, M;
int graph[501][501];

int main() { fastio

    cin >> N >> M;
    fill(&graph[0][0], &graph[0][0]+501*501, INF);

    FOR(i, 0, M) {
        int x, y; cin >> x >> y;
        graph[x][y] = 1;
    }

    FOR(k, 1, N+1) {
        FOR(i, 1, N+1) {
            FOR(j, 1, N+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    int ans = 0;
    FOR(i, 1, N+1) {
        int cnt = 0;
        FOR(j, 1, N+1) {
            if (graph[i][j] != INF || graph[j][i] != INF) {
                cnt++;
            }
        }
        if (cnt == N-1) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}