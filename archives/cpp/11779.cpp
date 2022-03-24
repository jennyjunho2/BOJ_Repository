#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
using p = pair<int, int>;
int n, m;
vector<p> graph[1001];
vector<int> ans;
priority_queue<p> pq;

int main() { fastio

    int dist[1001]; fill(dist, dist+1001, INF);
    int path[1001]; fill(path, path+1001, 0);
    
    cin >> n; cin >> m;
    FOR(i, 0, m) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({cost, end});
    }
    int st, nd; cin >> st >> nd;

    dist[st] = 0;
    pq.push({0, st});
    while (!pq.empty()) {
        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (node == nd) { break; }
        if (dist[node] < cost) { continue; }

        for (p i: graph[node]) {
            int next_cost = i.first;
            int next_node = i.second;
            if (dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-dist[next_node], next_node});
                path[next_node] = node;
            }
        }
    }

    int temp = nd;

    while (temp) {
        ans.push_back(temp);
        temp = path[temp];
    }

    reverse(ans.begin(), ans.end());
    cout << dist[nd] << endl;
    cout << ans.size() << endl;
    for (int i: ans) {
        cout << i << ' ';
    }

    return 0;
}  