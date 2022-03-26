#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
using t = tuple<int, int, int>;
int N;
int parent[100001];
vector<t> points;
vector<p> points_x, points_y, points_z;

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) { parent[a] = b; }
    else {parent[b] = a; }
}

int main() { fastio

    cin >> N;
    FOR(i, 1, N+1) {
        parent[i] = i;
        int x, y, z; cin >> x >> y >> z;
        points_x.push_back({x, i});
        points_y.push_back({y, i});
        points_z.push_back({z, i});
    }

    sort(points_x.begin(), points_x.end());
    sort(points_y.begin(), points_y.end());
    sort(points_z.begin(), points_z.end());

    FOR(i, 1, N) {
        points.push_back({points_x[i].first-points_x[i-1].first, points_x[i-1].second, points_x[i].second});
        points.push_back({points_y[i].first-points_y[i-1].first, points_y[i-1].second, points_y[i].second});
        points.push_back({points_z[i].first-points_z[i-1].first, points_z[i-1].second, points_z[i].second});
    }

    sort(points.begin(), points.end());

    int ans = 0;
    for (t i: points) {
        int cost = get<0>(i);
        int node1 = get<1>(i);
        int node2 = get<2>(i);

        if (find(node1) != find(node2)) {
            merge(node1, node2);
            ans += cost;
        }
    }

    cout << ans;

    return 0;
} 


