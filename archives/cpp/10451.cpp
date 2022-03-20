#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int next_node[1001];
bool visited[1001];

void dfs(int node) {
    visited[node] = true;
    
    if (!visited[next_node[node]]) {
        dfs(next_node[node]);
    }
}

int main() {
    fastio
    
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        memset(visited, 0, sizeof(visited));
        FOR(i, 1, N+1) {
            cin >> next_node[i];
        }
        
        int cnt = 0;
        FOR(i, 1, N+1 ){
            if (!visited[i]) {
                cnt++;
                dfs(i);
            }
        }

        cout << cnt << endl;
    }

    return 0;
} 