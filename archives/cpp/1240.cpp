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
using p = pair<int, int>;
int N, M;
vector<p> graph[1001];
bool visited[1001];

int bfs(int start, int end) {
    memset(visited, 0, sizeof(visited));
    queue<p> q;

    visited[start] = true;
    q.push({start, 0});
    
    while(!q.empty()) {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (node == end) { return dist; }

        for (p i: graph[node]) {
            int next_node = i.first;
            int next_dist = i.second;

            if (!visited[next_node]) {
                visited[next_node] = true;
                q.push({next_node, dist + next_dist});
            }
        }
    }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N-1) {
        int a, b, dist; cin >> a >> b >> dist;
        graph[a].push_back({b, dist});
        graph[b].push_back({a, dist});
    }

    FOR(i, 0, M) {
        int start, end; cin >> start >> end;
        cout << bfs(start, end) << endl;
    }

    return 0;
}