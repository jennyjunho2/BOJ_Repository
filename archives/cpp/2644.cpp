#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> graph[101];
bool visited[101];

void dfs(int node, int target, int depth) {
    visited[node] = true;
    if (node == target) {
        cout << depth;
        exit(0);
    }
    for (auto i: graph[node]) {
        if (!visited[i]) {
            dfs(i, target, depth+1);
        }
    }
}

int main() {
    fastio

    int n; cin >> n;
    int start, end; cin >> start >> end;
    int m; cin >> m;
    FOR(i, 0, m) {
        int x, y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(start, end, 0);
    cout << -1;

    return 0;
}