#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
vector<int> graph[10001];
bool visited[10001];
int com_depth[10001];

int bfs(int start) {
    int cnt = 1;
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (auto i: graph[x]) {
            if (!visited[i]) {
                cnt++;
                q.push(i);
                visited[i] = true;
            }
        }
    }

    return cnt;
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        graph[b].push_back(a);
    }

    FOR(i, 1, N+1) {
        memset(visited, 0, sizeof(visited));
        com_depth[i] = bfs(i);
    }

    int max_depth = *max_element(com_depth+1, com_depth+N+1);
    FOR(i, 1, N+1) {
        if (com_depth[i] == max_depth) {
            cout << i << ' ';
        }
    }

    return 0;
}