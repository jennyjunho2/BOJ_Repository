#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int next_node[101];
bool visited[101];
int ans[101];
int idx = 0;

void dfs(int start, int node) {
    if (!visited[node]) {
        visited[node] = true;
        dfs(start, next_node[node]);
    } else {
        if (start == node) {
            ans[idx] = start;
            idx++;
        }
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 1, N+1) {
        cin >> next_node[i];
    }

    FOR(i, 1, N+1) {
        memset(visited, 0, sizeof(visited));
        dfs(i, i);
    }

    cout << idx << endl;
    FOR(i, 0, idx) {
        cout << ans[i] << endl;
    }

    return 0;
}