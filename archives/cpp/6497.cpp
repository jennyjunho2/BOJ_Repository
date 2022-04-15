#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct edge{
    int cost, start, end;
    edge(int _cost, int _start, int _end) {
        this->cost = _cost;
        this->start = _start;
        this->end = _end;
    }
};

struct cmp {
    bool operator()(const edge& a, const edge& b) {
        return a.cost > b.cost;
    }
};

priority_queue<edge, vector<edge>, cmp> pq;

int m, n;
int parent[200001];
int total_cost = 0;

int find(int node) {
    return node == parent[node] ? node : parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) { parent[a] = b; }
    else { parent[b] = a; }
}

int main() { fastio

    while(true) {
        while(!pq.empty()) { pq.pop(); }
        total_cost = 0;
        iota(parent, parent+200001, 0);
        
        cin >> m >> n;
        if (m == 0 && n == 0) { break; }

        FOR(i, 0, n) {
            int x, y, z; cin >> x >> y >> z;
            total_cost += z;
            pq.push({z, x, y});
        }

        int temp_cost = 0;
        while(!pq.empty()) {
            edge i = pq.top();
            pq.pop();

            if (find(i.start) != find(i.end)) {
                temp_cost += i.cost;
                merge(i.start, i.end);
            }
        }

        cout << total_cost - temp_cost << endl;
    }

    return 0;
}