#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct edge {
    int start, end, cost;
    edge(int start, int end, int cost) {
        this->start = start;
        this->end = end;
        this->cost = cost;
    }
};

int V, E;
vector<edge> graph;
int parent[10001];

int find(int node) {
    if (node == parent[node]) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int node_a, int node_b) {
    node_a = find(node_a);
    node_b = find(node_b);
    parent[node_b] = node_a;
}

bool cmp(const edge& a, const edge& b) {
    return a.cost < b.cost;
}

int main() { fastio

    cin >> V >> E;
    FOR(i, 0, E) {
        int a, b, c; cin >> a >> b >> c;
        graph.push_back(edge(a, b, c));
    }

    FOR(i, 1, V+1) { parent[i] = i; }

    sort(graph.begin(), graph.end(), cmp);

    ll ans = 0;
    for (auto i: graph) {
        if (find(i.start) != find(i.end)) {
            merge(i.start, i.end);
            ans += i.cost;
        }
    }

    cout << ans;

    return 0;
} 