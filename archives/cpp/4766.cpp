#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    double before; cin >> before;
    while (true) {
        double after; cin >> after;
        if (after == 999.0) { break; }
        cout << after - before << endl;
        before = after;
    }

    return 0;
}