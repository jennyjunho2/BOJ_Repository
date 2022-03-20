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

int N, M;
int dist[1001];
vector<p> graph[1001];
priority_queue<p> pq;

int main() {
    fastio
    
    cin >> N >> M;
    FOR(i, 0, M) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
    }
    fill(dist, dist+1001, INF);

    int start, end;
    cin >> start >> end;

    pq.push({0, start});
    while(!pq.empty()) {
        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist[node] < cost) { continue; }
        for (p i: graph[node]) {
            int next_node = i.first;
            int next_cost = i.second;

            if (dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-dist[next_node], next_node});
            }
        }
    }

    cout << dist[end];

    return 0;
} 