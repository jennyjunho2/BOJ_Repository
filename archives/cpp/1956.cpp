#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
using p = pair<int, int>;
int V, E;
vector<p> graph[401];
int dist[401]; 

int dijkstra(int start) {
    priority_queue<p> pq;
    dist[start] = 0;
    pq.push({0, start});

    bool find_cycle = false;
    while(!pq.empty()) {
        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (find_cycle && start == node) {
            return cost;
        }

        find_cycle = true;
        if (dist[node] < cost) { continue; }

        for (p i: graph[node]) {
            int next_node = i.first;
            int next_cost = i.second;
            if (next_node == start || dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-dist[next_node], next_node});
            }
        }
    }

    return INF;
}

int main() {fastio
    
    cin >> V >> E;
    FOR(i, 0, E) {
        int a, b, cost; cin >> a >> b >> cost;
        graph[a].push_back({b, cost});
    }

    int ans = INF;
    FOR(i, 1, V+1) {
        fill(dist, dist+401, INF);
        ans = min(ans, dijkstra(i));
    }

    cout << (ans == INF ? -1 : ans);

    return 0;
}