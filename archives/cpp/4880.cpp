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
        int a, b, c; cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) { break; }

        if (a+c == 2*b) {
            cout << "AP " << (2*c-b) << endl;
        } else {
            cout << "GP " << (c * (b/a)) << endl;
        }
    }

    return 0;
}