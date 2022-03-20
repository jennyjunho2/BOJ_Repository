#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N;
vector<int> graph[100001];
int parent[100001];

void dfs(int node, int par) {
    parent[node] = par;

    for (auto i: graph[node]) {
        if (parent[i] == -1) {
            dfs(i, node);
        }
    }
}

int main() {
    fastio
    
    cin >> N;
    memset(parent, -1, sizeof(parent));
    FOR(i, 0, N-1) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0);
    FOR(i, 2, N+1) {
        cout << parent[i] << endl;
    }

    return 0;
} 