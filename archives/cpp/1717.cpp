#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int n, m;
int parent[1000001];

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    parent[b] = a;
}

int main() { fastio

    cin >> n >> m;
    FOR(i, 1, n+1) { parent[i] = i; }
    FOR(i, 0, m) {
        int num, a, b; cin >> num >> a >> b;
        if (num == 0) {
            merge(max(a, b), min(a, b));
        } else {
            if (find(a) == find(b)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}  