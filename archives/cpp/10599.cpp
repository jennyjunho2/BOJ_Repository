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

    while (true) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0) { break; }

        cout << c-b << ' ' << d-a << endl;
    }

    return 0;
}