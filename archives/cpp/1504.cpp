#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MAX 987654321
using p = pair<int, int>;
int N, E;
vector<p> graph[801];
ll dist[801];

ll dijkstra(int start, int end) {
    fill(dist, dist+801, MAX);
    priority_queue<p> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        ll cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (p i: graph[node]) {
            int next_node = i.first;
            ll next_cost = i.second;

            if (dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-dist[next_node], next_node});
            }
        }
    }

    return dist[end];
}

int main() {
    fastio
    
    
    cin >> N >> E;
    FOR(i, 0, E) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
        graph[end].push_back({start, cost});
    }
    int v1, v2; cin >> v1 >> v2;

    ll path1 = dijkstra(1, v1) + dijkstra(v1, v2) + dijkstra(v2, N);
    ll path2 = dijkstra(1, v2) + dijkstra(v2, v1) + dijkstra(v1, N);

    ll min_path = min(path1, path2);
    
    cout << (min_path >= MAX ? -1 : min_path);

    return 0;
} 