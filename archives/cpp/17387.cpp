#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct point { ll x, y; };

struct line { point p1, p2; };

int ccw(const point& p1, const point& p2, const point& p3) {
    ll cross = (p2.x - p1.x)*(p3.y - p1.y) - (p3.x - p1.x)*(p2.y - p1.y);
    if (cross > 0) { return 1;}
    else if (cross < 0) { return -1; }
    else { return 0; }
}

void swap_point(point* p1, point* p2) {
    point temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

bool cmp(const point& a, const point& b) {
    if (a.x == b.x) {
        return a.y <= b.y;
    } else {
        return a.x <= b.x;
    }
}

bool line_intersect(line& l1, line& l2) {
    int l1_to_l2 = ccw(l1.p1, l1.p2, l2.p1) * ccw(l1.p1, l1.p2, l2.p2);
    int l2_to_l1 = ccw(l2.p1, l2.p2, l1.p1) * ccw(l2.p1, l2.p2, l1.p2);

    if (l1_to_l2 == 0 && l2_to_l1 == 0) {
        if (cmp(l1.p2, l1.p1)) { swap_point(&l1.p1, &l1.p2); }
        if (cmp(l2.p2, l2.p1)) { swap_point(&l2.p1, &l2.p2); }

        return (cmp(l2.p1, l1.p2) && cmp(l1.p1, l2.p2));
    } else {
        return (l1_to_l2 <= 0) && (l2_to_l1 <= 0);
    }
}

int main() {fastio

    line l1, l2;
    int x1, y1, x2, y2; cin >> l1.p1.x >> l1.p1.y >> l1.p2.x >> l1.p2.y;
    int x3, y3, x4, y4; cin >> l2.p1.x >> l2.p1.y >> l2.p2.x >> l2.p2.y;
    
    cout << (line_intersect(l1, l2) ? 1 : 0);

    return 0;
}