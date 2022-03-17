#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> graph[2001];
bool visited[2001];

void dfs(int node, int depth) {
    if (depth == 4) {
        cout << 1;
        exit(0);
    }

    visited[node] = true;
    for (auto i: graph[node]) {
        if (!visited[i]) {
            dfs(i, depth + 1);
        }
    }
    visited[node] = false;
    return;
}

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    FOR(i, 0, N) {
        memset(visited, 0, sizeof(visited));
        dfs(i, 0);
    }
    cout << 0;

    return 0;
}