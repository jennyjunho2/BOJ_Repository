#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M, R;
vector<int> graph[100001];
ll d[100001];
ll visited[100001];
int order = 1;

void dfs(int node, int depth) {
    visited[node] = order;
    d[node] = depth;

    for (auto next_node: graph[node]) {
        if (!visited[next_node]) {
            order++;
            dfs(next_node, depth+1);
        }
    }
}

int main() { fastio

    cin >> N >> M >> R;
    memset(d, -1, sizeof(d));
    FOR(i, 0, M) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    FOR(i, 1, N+1) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    dfs(R, 0);
    
    ll sum = 0;
    FOR(i, 1, N+1) {
        sum += d[i] * visited[i];
    }

    cout << sum;

    return 0;
}