#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

double distance(int x1, int x2, int y1, int y2) {
    return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if ((x1 == x2) && (y1 == y2)) {
            if (r1  == r2) {
                cout << -1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            double dist = distance(x1, x2, y1, y2);
            if (dist < r1+r2 && dist > abs(r1-r2)) {
                cout << 2 << endl;
            } else if (dist == (double)(r1+r2) || dist == (double)abs(r1-r2)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}