#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//--------------------------------------------------

double dist(const int& x1, const int& y1, const int& x2, const int& y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2) * (y1-y2));
}

int main() {

    int T; cin >> T;
    while (T--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int n; cin >> n;
        int cnt = 0;

        while (n--) {
            int cx, cy, r; cin >> cx >> cy >> r;
            bool start_in = dist(x1, y1, cx, cy) < r;
            bool dest_in = dist(x2, y2, cx, cy) < r;
            cnt = cnt + start_in + dest_in - 2*(start_in && dest_in);
        }
        
        cout << cnt << endl;
    }

    return 0;
}