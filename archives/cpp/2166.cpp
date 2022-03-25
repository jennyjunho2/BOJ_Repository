#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using ld = long double;
struct pos{
    ld y, x;
    pos(ld _y, ld _x) : y(_y), x(_x) {};
};

int N;
vector<pos> points;

ld ex(const pos& stand, const pos& a, const pos& b) {
    return ((a.x - stand.x)*(b.y - stand.y) - (a.y - stand.y)*(b.x - stand.x)) / 2;
}

ld area() {
    ld result = 0;
    pos st = points[0];
    FOR(i, 1, N-1) {
        result += ex(st, points[i], points[i+1]);
    }

    return result;
}

int main() { fastio

    cin >> N;
    FOR(i, 0, N) {
        ld temp_y, temp_x; cin >> temp_y >> temp_x;
        points.push_back({temp_y, temp_x});
    }

    ld result = area();
    if (result < 0) { result *= -1; }
    cout << fixed; cout.precision(1);
    cout << result;

    return 0;
}