#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int cnt = 0;
int next_node[100001];
bool visited[100001];
bool visited_in_cycle[100001];

void dfs(int node) {
    visited[node] = true;
    
    if (!visited[next_node[node]]) {
        dfs(next_node[node]);
    } else if (!visited_in_cycle[next_node[node]]) {
        cnt++;
        for (int i = next_node[node]; i != node; i = next_node[i]) {
            cnt++;
        }
    }
    visited_in_cycle[node] = true;
}

int main() {
    fastio
    
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        memset(visited, 0, sizeof(visited));
        memset(visited_in_cycle, 0, sizeof(visited_in_cycle));
        FOR(i, 1, N+1) {
            cin >> next_node[i];
        }
        
        cnt = 0;
        FOR(i, 1, N+1){
            if (!visited[i]) {
                dfs(i);
            }
        }

        cout << N - cnt << endl;
    }

    return 0;
} 