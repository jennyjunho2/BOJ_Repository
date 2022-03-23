#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct edge{
    int start, end, cost;
    edge(int start, int end, int cost) : start(start), end(end), cost(cost) {}
};

struct cmp {
    bool operator()(const edge& a, const edge& b) {
        return a.cost > b.cost;
    }
};

int N, M;
int parent[100001];
priority_queue<edge, vector<edge>, cmp> pq;
vector<int> costs;

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a != b) { parent[a] = b; }
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 1, N+1) { parent[i] = i; }

    FOR(i, 0, M) {
        int A, B, C; cin >> A >> B >> C;
        pq.push(edge(A, B, C));
    }

    ll ans = 0;
    while(!pq.empty()) {
        edge tmp = pq.top();
        pq.pop();

        if (find(tmp.start) != find(tmp.end)) {
            merge(tmp.start, tmp.end);
            ans += tmp.cost;
            costs.push_back(tmp.cost);
        }

    }

    cout << ans - *max_element(costs.begin(), costs.end());

    return 0;
} 