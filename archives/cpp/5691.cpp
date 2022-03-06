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
        int a, b; cin >> a >> b;
        if (a == 0 && b == 0) { break; }

        cout << 2*a - b << endl;
    }

    return 0;
}