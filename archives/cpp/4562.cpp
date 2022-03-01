#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int X, Y; cin >> X >> Y;
        if (X < Y) {
            cout << "NO BRAINS" << endl;
        } else {
            cout << "MMM BRAINS" << endl;
        }
    }

    return 0;
}