#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
#define INF int(1e9)
int N, M;
vector<p> graph[501];

int main() {fastio

    cin >> N >> M;
    ll dist[501];
    fill(dist, dist+501, INF);
    FOR(i, 0, M) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
    }

    dist[1] = 0;

    FOR(_, 0, M-1) {
        FOR(node, 1, N+1) {
            if (dist[node] == INF) { continue; }
            for (p k: graph[node]) {
                int next_node = k.first;
                int next_dist = k.second;

                dist[next_node] = min(dist[next_node], dist[node] + next_dist);
            }
        }
    }

    bool is_negative_cycle = false;
    FOR(node, 1, N+1) {
        if (dist[node] == INF) { continue; }
        for (p i: graph[node]) {
            int next_node = i.first;
            int next_dist = i.second;
            if (dist[next_node] > dist[node] + next_dist) {
                is_negative_cycle = true;
                break;
            }
        }
        if (is_negative_cycle) { break; }
    }

    if (is_negative_cycle) {
        cout << -1 << endl;
    } else {
        FOR(i, 2, N+1) {
            cout << (dist[i] == INF ? -1 : dist[i]) << endl;
        }
    }

    return 0;
}