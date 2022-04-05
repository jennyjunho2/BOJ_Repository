#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int parent[300001];
int find(int node) {
    if (node == parent[node]) { return node; }
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

int main() {fastio

    cin >> N;
    iota(parent, parent+N+1, 0);
    FOR(i, 0, N-2) {
        int node1, node2; cin >> node1 >> node2;
        if (find(node1) != find(node2)) {
            merge(node1, node2);
        }
    }

    FOR(i, 1, N) {
        FOR(j, i+1, N+1) {
            if (find(i) != find(j)) {
                cout << i << ' ' << j;
                return 0;
            }
        }
    }

    return 0;
}
