#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
#define MAX int(1e9)
int n, m, r;
int items[101];
vector<p> graph[101];
int dist[101];

int dijkstra(int start) {
    priority_queue<p> pq;
    fill(dist, dist+101, MAX);

    pq.push({0, start});
    dist[start] = 0;

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

    int temp_items = 0;
    FOR(i, 1, n+1) {
        if (dist[i] <= m) {
            temp_items += items[i];
        }
    }

    return temp_items;
}

int main() {
    fastio

    cin >> n >> m >> r;
    FOR(i, 1, n+1) {
        cin >> items[i];
    }

    FOR(i, 0, r) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
        graph[end].push_back({start, cost});
    }

    int max_items = -1;
    FOR(i, 1, n+1) {
        max_items = max(max_items, dijkstra(i));
    }

    cout << max_items;

    return 0;
} 