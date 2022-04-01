#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<ll, ll>;
#define INF int(1e9)
int N, Q;
vector<p> graph[5001];
bool visited[5001];

int main() {fastio
    
    cin >> N >> Q;
    FOR(i, 0, N-1) {
        int start, end, cost; cin >> start >> end >> cost;
        graph[start].push_back({end, cost});
        graph[end].push_back({start, cost});
    }

    int k, v;
    FOR(i, 0, Q) {
        memset(visited, false, sizeof(visited));
        int ans = 0;
        cin >> k >> v;

        queue<p> q;
        q.push({INF, v});
        visited[v] = true;

        while(!q.empty()) {
            ll node = q.front().second;
            ll cost = q.front().first;
            q.pop();
            if (k > cost) { continue; }

            for (p i: graph[node]) {
                ll next_node = i.first;
                ll next_cost = i.second;
                
                if (visited[next_node]) { continue; }

                ll min_cost = min(next_cost, cost);
                if (min_cost >= k) {
                    ans++;
                    visited[next_node] = true;
                    q.push({min_cost, next_node});
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
