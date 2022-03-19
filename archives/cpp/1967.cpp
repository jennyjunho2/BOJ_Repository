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
int n;
vector<p> graph[10001];
bool visited[10001];
int max_dist = 0;
int max_node;

void dfs(int node, int dist) {
    if (visited[node]) { return; }
    if (dist > max_dist) {
        max_dist = dist;
        max_node = node;
    }
    
    visited[node] = true;
    for (p i: graph[node]) {
        if (!visited[i.first]) {
            dfs(i.first, dist + i.second);
        }        
    }
}

int main() {
    fastio
    
    cin >> n;
    FOR(i, 0, n-1) {
        int parent, child, dist;
        cin >> parent >> child >> dist;
        graph[parent].push_back({child, dist});
        graph[child].push_back({parent, dist});
    }

    dfs(1, 0);

    memset(visited, 0, sizeof(visited));
    max_dist = 0;
    dfs(max_node, 0);
    cout << max_dist;

    return 0;
} 