#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int V, E;
vector<int> graph[20001];
int visited[20001];

void dfs(int node) {
    if (!visited[node]) {
        visited[node] = 1;
    }

    for (int next_node: graph[node]) {
        if (!visited[next_node]) {
            if (visited[node] == 1) {
                visited[next_node] = -1;
            } else if (visited[node] == -1) {
                visited[next_node] = 1;
            }
            dfs(next_node);
        }
    }
}

bool check_graph() {
    FOR(i, 1, V+1) {
        for (auto j: graph[i]) {
            if (visited[i] == visited[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() { fastio

    TC {
        cin >> V >> E;
        
        FOR(i, 0, E) {
            int u, v; cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        FOR(i, 1, V+1) {
            if (!visited[i]) {
                dfs(i);
            }
        }

        if (check_graph()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        memset(visited, 0, sizeof(visited));
        FOR(i, 1, 20001) { graph[i].clear(); }
    }

    return 0;
}  