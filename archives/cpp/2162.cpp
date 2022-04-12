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
struct point { int y, x; };

struct line {
    point p1, p2;
    line(point _p1, point _p2) {
        this->p1 = _p1;
        this->p2 = _p2;
    }
};

int N;
vector<line> lines;
int parent[3000];

int ccw(const point& p1, const point& p2, const point& p3) {
    int cross = (p2.x - p1.x)*(p3.y - p1.y) - (p3.x - p1.x)*(p2.y - p1.y);
    if (cross > 0) { return 1; }
    else if (cross < 0) { return -1; }
    else { return 0; }
}

bool cmp(const point& p1, const point& p2) {
    return p1.x == p2.x ? p1.y <= p2.y : p1.x <= p2.x;
}

void swap_point(point* p1, point* p2) {
    point temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

bool line_intersect(line& l1, line& l2) {
    int l1_to_l2 = ccw(l1.p1, l1.p2, l2.p1) * ccw(l1.p1, l1.p2, l2.p2);
    int l2_to_l1 = ccw(l2.p1, l2.p2, l1.p1) * ccw(l2.p1, l2.p2, l1.p2);

    if (l1_to_l2 == 0 && l2_to_l1 == 0)  {
        if (cmp(l1.p2, l1.p1)) { swap_point(&l1.p1, &l1.p2); }
        if (cmp(l2.p2, l2.p1)) { swap_point(&l2.p1, &l2.p2); }

        return cmp(l2.p1, l1.p2) && cmp(l1.p1, l2.p2);
    } else {
        return l1_to_l2 <= 0 && l2_to_l1 <= 0;
    }
}

int find(int node) {
    return node == parent[node] ? node : parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() { fastio

    iota(parent, parent+3000, 0);
    cin >> N;
    FOR(i, 0, N) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        point temp1, temp2;
        temp1.x = x1; temp1.y = y1; temp2.x = x2; temp2.y = y2;
        lines.push_back({temp1, temp2});
    }

    FOR(i, 0, N) {
        FOR(j, i+1, N) {
            if (find(i) != find(j) && line_intersect(lines[i], lines[j])) {
                merge(i, j);
            }
        }
    }

    map<int, int> table;
    FOR(i, 0, N) {
        table[find(parent[i])]++;
    }

    cout << table.size() << endl;
    int max_cnt = 0;
    for (auto it = table.begin(); it != table.end(); it++) {
        max_cnt = max(max_cnt, it->second);
    }
    cout << max_cnt;

    return 0;
}