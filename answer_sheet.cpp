#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
// https://www.acmicpc.net/problem/2887
int N;
struct pos{
    int x, y, z;
    pos(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {};
};

struct edge {
    pos start, end; int cost;
    edge(pos _start, pos _end, int _cost) : start(_start), end(_end), cost(_cost) {};
};

int dist(const pos& a, const pos& b) {
    return min({abs(a.x - b.x), abs(a.y - b.y), abs(a.z - b.z)});
}

bool cmp_cost(const edge& a, const edge& b) {
    return a.cost > b.cost;
}

int main() { fastio

    

    return 0;
} 