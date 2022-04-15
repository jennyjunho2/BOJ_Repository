#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;
vector<int> graph[101];
int visited[101];
int max_dist = INT_MAX;

void dfs(int node, int depth) {
    visited[node] = depth;
    
    for (auto i: graph[node]) {
        if 
    }
}

int main() { fastio

    cin >> N >> K;
    FOR(i, 0, K) {
        int x, y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    FOR(i, 1, N+1) {
        memset(visited, -1, sizeof(visited));
        dfs(i, 0);
    }

    return 0;
}