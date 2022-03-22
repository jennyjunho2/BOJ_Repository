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

struct cmp {
    bool operator()(const edge& a, const edge& b) {
        return a.cost > b.cost;
    }
};

int N, M;
priority_queue<edge, vector<edge>, cmp> graph;
int parent[1001];

int find(int node) {
    if (node == parent[node]) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int node_a, int node_b) {
    node_a = find(node_a);
    node_b = find(node_b);
    parent[node_b] = node_a;
}



int main() { fastio

    cin >> N >> M;
    FOR(i, 0, M) {
        int a, b, c; cin >> a >> b >> c;
        graph.push(edge(a, b, c));
    }

    FOR(i, 1, N+1) { parent[i] = i; }

    ll ans = 0;
    while (!graph.empty()){
        edge i = graph.top();
        graph.pop();
        if (find(i.start) != find(i.end)) {
            merge(i.start, i.end);
            ans += i.cost;
        }
    }

    cout << ans;

    return 0;
} 