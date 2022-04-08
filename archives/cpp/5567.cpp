#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int n, m;
vector<int> graph[501];
bool visited[501];
queue<p> q;

void bfs(int start) {
    visited[start] = true;
    q.push({start, 0});

    while(!q.empty()) {
        int node = q.front().first;
        int depth = q.front().second;
        q.pop();

        if (depth >= 2) { continue; }

        for (auto next_node: graph[node]) {
            if (!visited[next_node]) {
                visited[next_node] = true;
                q.push({next_node, depth+1});
            }
        }
    }
}

int main() { fastio

    cin >> n >> m;
    FOR(i, 0, m) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);

    int cnt = 0;
    FOR(i, 2, n+1) {
        if(visited[i]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}