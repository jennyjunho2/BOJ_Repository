#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n, m;
int parent[500001];

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() { fastio

    cin >> n >> m;
    FOR(i, 1, n+1) { parent[i] = i; }

    FOR(i, 0, m) {
        int node_a, node_b; cin >> node_a >> node_b;
        if (find(node_a) != find(node_b)) {
            merge(node_a, node_b);
        } else {
            cout << i+1;
            return 0;
        }
    }

    cout << 0;

    return 0;
} 