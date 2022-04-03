#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int w, h, p, q, t;

int main() {fastio

    cin >> w >> h >> p >> q >> t;
    
    int nx = (p+t) % (2*w);
    int ny = (q+t) % (2*h);

    cout << w - abs(w-nx) << ' ' << h - abs(h-ny);

    return 0;
}
