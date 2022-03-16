#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
vector<int> computer[101];
bool visited[101];

void dfs(int node) {
    visited[node] = true;
    for (auto i: computer[node]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    fastio

    cin >> N; cin >> M;
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        computer[a].push_back(b);
        computer[b].push_back(a);
    }

    dfs(1);

    int cnt = -1;
    FOR(i, 1, N+1) {
        if (visited[i]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}