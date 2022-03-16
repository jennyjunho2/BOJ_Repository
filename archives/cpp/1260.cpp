#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M, V;
vector<int> graph[1001];
bool visited[1001];
queue<int> q;

void dfs(int node) {
    visited[node] = true;
    cout << node << ' ';
    for (auto i: graph[node]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << ' ';
        for (auto i: graph[node]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    fastio

    cin >> N >> M >> V;
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    FOR(i, 1, N+1) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << endl;
    memset(visited, false, sizeof(visited));
    bfs(V);

    return 0;
}