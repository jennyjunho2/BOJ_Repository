#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
vector<int> graph[1001];
bool visited[1001];
int cnt;

void dfs(int node) {
    visited[node] = true;
    for (auto i: graph[node]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    fastio

    cin >> N >> M;
    while (M--) {
        int u, v; cin >> u >> v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    FOR(i, 1, N+1) {
        if (!visited[i]) {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt;

    return 0;
}