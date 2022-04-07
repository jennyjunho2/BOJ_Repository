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
int n, d, c;
vector<p> graph[10001];
int dist[10001];

void dijkstra(int start) {
    priority_queue<p> pq;
    dist[start] = 0;
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
}

int main() {
    fastio

    TC {
        FOR(i, 1, n+1) { graph[i].clear(); }
        fill(dist, dist+10001, INF);

        cin >> n >> d >> c;
        FOR(i, 0, d) {
            int a, b, s; cin >> a >> b >> s;
            graph[b].push_back({a, s});
        }

        dijkstra(c);
        int max_time = 0, cnt = 1;
        FOR(i, 1, n+1) {
            if (dist[i] != INF && i != c) {
                cnt++;
                max_time = max(dist[i], max_time);
            }
        }

        cout << cnt << ' ' << max_time << endl;
    }

    return 0;
}