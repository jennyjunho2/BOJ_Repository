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
int V;
vector<p> graph[100001];
bool visited[100001];
int max_dist = 0;
int max_node;

void dfs(int node, int dist) {
    if (!visited[node]) {
        if (dist > max_dist) {
            max_dist = dist;
            max_node = node;
        }

        visited[node] = true;
        for (p i: graph[node]) {
            dfs(i.first, i.second + dist);
        }
    }
}

int main() {
    fastio
    
    cin >> V;
    FOR(i, 1, V+1) {
        int start_node, end_node, dist;
        cin >> start_node;
        cin >> end_node;
        while (end_node != -1) {
            cin >> dist;
            graph[start_node].push_back({end_node, dist});
            // graph[end_node].push_back({start_node, dist});
            cin >> end_node;
        }
    }

    // 가장 먼 놈 찾기
    dfs(1, 0);

    // 가장 먼 놈부터 다시 탐색
    memset(visited, 0, sizeof(visited));
    max_dist = 0;
    dfs(max_node, 0);

    cout << max_dist;

    return 0;
} 