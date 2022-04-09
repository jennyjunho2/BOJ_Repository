#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<ll, ll>;

struct edge{
    double cost; int node1; int node2;
    edge(double _cost, int _node1, int _node2) : cost(_cost), node1(_node1), node2(_node2) {};
};

struct cmp{
    bool operator()(const edge& a, const edge& b) {
        return a.cost > b.cost;
    }
};

int N, M;
int parent[1001];
vector<p> ships;
priority_queue<edge, vector<edge>, cmp> pq;

double dist(const p& a, const p& b) {
    return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

int find(int node) {
    return node == parent[node] ? node : parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) { parent[a] = b; }
    else { parent[b] = a; }
}

int main() { fastio

    cin >> N >> M;
    ships.resize(N+1);
    iota(parent, parent+1001, 0);
    FOR(i, 1, N+1) {
        cin >> ships[i].first >> ships[i].second;
    }

    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        if (find(a) != find(b)) {
            merge(a, b);
        }
    }

    FOR(i, 1, N){
        FOR(j, i+1, N+1) {
            pq.push({dist(ships[i], ships[j]), i, j});
        }
    }

    double ans = 0.00;
    while(!pq.empty()) {
        edge temp = pq.top();
        double cost = temp.cost;
        int node1 = temp.node1;
        int node2 = temp.node2;
        pq.pop();

        if (find(node1) != find(node2)) {
            merge(node1, node2);
            ans += cost;
        }
    }

    cout << fixed; cout.precision(2);
    cout << ans;

    return 0;
}