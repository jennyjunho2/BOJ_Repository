#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y; cin >> x; cin >> y;
    if (x > 0 && y > 0) {
        cout << 1;
    } else if (x < 0 && y > 0) {
        cout << 2;
    } else if (x < 0 && y < 0) {
        cout << 3;
    } else if (x > 0 && y < 0) {
        cout << 4;
    }

    return 0;
}