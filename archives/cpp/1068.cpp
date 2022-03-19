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
int parent[50];

void dfs(int node) {
    parent[node] = -2;
    FOR(i, 0, N) {
        if (parent[i] == node) {
            dfs(i);
        }
    }
}

int main() {
    fastio
    
    cin >> N;
    FOR(i, 0, N) { cin >> parent[i];}

    int delete_node; cin >> delete_node;
    dfs(delete_node);

    int cnt= 0;
    FOR(i, 0, N) {
        if (parent[i] != -2 && find(parent, parent+N, i) == parent+N) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
} 