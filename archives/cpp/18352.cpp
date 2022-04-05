#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9);
using p = pair<int, int>;

int N, M, K, X;
int visited[1000001];
vector<int> graph[1000001];
queue<int> q;

int main() {fastio

    cin >> N >> M >> K >> X;
    memset(visited, -1, sizeof(visited));
    FOR(i, 0, M) {
        int start, end; cin >> start >> end;
        graph[start].push_back(end);
    }


    visited[X] = 0;
    q.push(X);
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for (auto node: graph[x]) {
            if (visited[node] == -1) {
                visited[node] = visited[x] + 1;
                q.push(node);
            }
        }
    }

    bool is_exist = false;
    FOR(i, 1, N+1) {
        if (visited[i] == K) {
            cout << i << endl;
            is_exist = true;
        }
    }

    if (!is_exist) {
        cout << -1;
    }

    return 0;
}
