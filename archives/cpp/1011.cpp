#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int x, y; cin >> x >> y;
        int dist = sqrt(y-x);
        
        int num = (pow(dist, 2) == y-x ? 2*dist-1 : 2*dist);
        if (y-x > dist*(dist+1)) {
            num++;
        }
        cout << num << endl;
        
    }

    return 0;
}