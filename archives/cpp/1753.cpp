#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
using p = pair<int, int>;

int V, E, K;
int dist[20001];
vector<p> graph[20001];
priority_queue<p> pq;

int main() {
    fastio
    
    cin >> V >> E; cin >> K;
    FOR(i, 0, E) {
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    fill(dist, dist+20001, INF);

    pq.push({0, K});
    dist[K] = 0;

    while (!pq.empty()) {
        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (p i: graph[node]) {
            int next_node = i.first;
            int next_cost = i.second;

            if (dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-dist[next_node], next_node});
            }
        }
    }

    FOR(i, 1, V+1) {
        if (dist[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }

    return 0;
} 