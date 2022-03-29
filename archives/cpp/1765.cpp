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
int parent[1001];
vector<int> enemy[1001];
bool visited[1001];
int cnt = 0;

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

int main() {fastio

    cin >> n >> m;
    FOR(i, 1, n+1) { parent[i] = i; }
    FOR(i, 0, m) {
        char ch; int node1, node2; cin >> ch >> node1 >> node2;
        if (ch == 'F') {
            merge(node1, node2);
        } else {
            enemy[node1].push_back(node2);
            enemy[node2].push_back(node1);
        }
    }

    FOR(node, 1, n+1) {
        for (int j: enemy[node]) {
            for (int next_node: enemy[j]) {
                merge(node, next_node);
            }
        }
    }

    set<int> S;
    FOR(i, 1, n+1) {
        S.insert(find(i));
    }
    cout << S.size();
    
    return 0;
}