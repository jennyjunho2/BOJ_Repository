#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() { fastio

    int D, H, W; cin >> D >> H >> W;
    double k = D / sqrt(H*H + W*W);
    cout << (int)(H * k) << ' ' << (int)(W * k);

    return 0;
}  