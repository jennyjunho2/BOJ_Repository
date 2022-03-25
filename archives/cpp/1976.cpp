#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int parent[201];
int path[1001];

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    if (a == b) { return; }
    a = find(a);
    b = find(b);

    if (a > b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 1, N+1) { parent[i] = i; }
    FOR(i, 1, N+1) {
        FOR(j, 1, N+1) {
            int temp; cin >> temp;

            if (temp == 1) {
                merge(i, j);
            }
        }
    }

    FOR(i, 1, M+1) {
        cin >> path[i];
    }

    FOR(i, 1, M) {
        if (find(path[i]) != find(path[i+1])) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}