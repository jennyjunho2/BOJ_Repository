#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int x, y, z, w, dx, dy, dz, dw;
        cin >> x >> y >> z >> w >> dx >> dy >> dz >> dw;
        cout << max(1, x+dx) + 5*max(1, y+dy) + 2*max(0, z+dz) + 2*(w+dw) << endl;
    }

    return 0;
}