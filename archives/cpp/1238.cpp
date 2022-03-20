#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MAX int(1e9)
using p = pair<int, int>;
int N, M, X;
vector<p> graph[1001];
int dist[1001];
int max_time = -1;

void dijkstra(int start) {
    priority_queue<p> pq;
    pq.push({0, start});

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
}

int main() {
    fastio
    
    cin >> N >> M >> X;

    FOR(i, 0, N) {
        graph[i].push_back({i, 0});
    }

    FOR(i, 0, M) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
    }

    FOR(i, 1, N+1) {
        int temp_time = 0;
        fill(dist, dist+1001, MAX);
        dijkstra(i);
        temp_time += dist[X];
        fill(dist, dist+1001, MAX);
        dijkstra(X);
        temp_time += dist[i];
        max_time = max(max_time, temp_time);
    }

    cout << max_time;

    return 0;
} 