#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int parent[100001];
int cnt;

struct pos{
    int x, y, z, num;
    pos(int _x, int _y, int _z, int _num) : x(_x), y(_y), z(_z), num(_num) {};
};

struct edge {
    pos start, end; int cost;
    edge(pos _start, pos _end, int _cost) : start(_start), end(_end), cost(_cost) {};
};

struct cmp_cost {
    bool operator()(const edge& a, const edge& b) {
        return a.cost > b.cost;
    }
};

int dist(const pos& a, const pos& b) { return min({abs(a.x - b.x), abs(a.y - b.y), abs(a.z - b.z)}); }
bool cmp_x(const pos& a, const pos& b) { return a.x < b.x; }
bool cmp_y(const pos& a, const pos& b) { return a.y < b.y; }
bool cmp_z(const pos& a, const pos& b) { return a.z < b.z; }

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

int merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a < b) { parent[b] = a;}
    else { parent[a] = b; }
    cnt++;
}

int N;
vector<pos> planets;
priority_queue<edge, vector<edge>, cmp_cost> graph;

int main() { fastio

    cin >> N;
    FOR(i, 1, N+1){
        parent[i] = i;
        int x, y, z; cin >> x >> y >> z;
        pos temp = {x, y, z, i};
        planets.push_back(temp);
    }

    sort(planets.begin(), planets.end(), cmp_x);
    FOR(i, 0, N-1) {
        graph.push({planets[i], planets[i+1], dist(planets[i], planets[i+1])});
    }

    sort(planets.begin(), planets.end(), cmp_y);
    FOR(i, 0, N-1) {
        graph.push({planets[i], planets[i+1], dist(planets[i], planets[i+1])});
    }

    sort(planets.begin(), planets.end(), cmp_z);
    FOR(i, 0, N-1) {
        graph.push({planets[i], planets[i+1], dist(planets[i], planets[i+1])});
    }

    int ans = 0;
    while(!graph.empty()) {
        edge i = graph.top();
        graph.pop();
        if (find(i.start.num) != find(i.end.num)) {
            merge(i.start.num, i.end.num);
            ans += i.cost;

            if (cnt == N) { break; }
        }
    }

    cout << ans;

    return 0;
} 