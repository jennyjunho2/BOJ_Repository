#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    while (true) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) { break; }
        if (a == 0) {
            a = c/b;
        } else if (b == 0) {
            b = c/a;
        } else {
            c = a*b;
        }

        cout << a << ' ' << b << ' ' << c << endl;
    }
    
    return 0;
}