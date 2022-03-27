#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<double, double>;
using t = tuple<double, int, int>;
int n;
int parent[101];

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

double dist(const p& a, const p& b) {
    return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

vector<p> points;
priority_queue<t> pq;

int main() {fastio

    cin >> n;
    FOR(i, 1, n+1) { parent[i] = i; }
    FOR(i, 0, n) {
        double temp_y, temp_x; cin >> temp_y >> temp_x;
        points.push_back({temp_y, temp_x});
    }

    FOR(i, 0, n) {
        FOR(j, i+1, n) {
            pq.push({-dist(points[i], points[j]), i+1, j+1});
        }
    }

    double total_cost = 0;
    while(!pq.empty()) {
        t temp = pq.top();
        double cost = -get<0>(temp);
        int node1 = get<1>(temp);
        int node2 = get<2>(temp);
        pq.pop();

        if (find(node1) != find(node2)) {
            merge(node1, node2);
            total_cost += cost;
        }
    }

    cout << fixed; cout.precision(2);
    cout << total_cost;

    return 0;
}