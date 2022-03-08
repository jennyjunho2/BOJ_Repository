#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int num = min({a, b, c, d, e});
    while (true) {
        int A = (num%a == 0);
        int B = (num%b == 0);
        int C = (num%c == 0);
        int D = (num%d == 0);
        int E = (num%e == 0);
        if (A+B+C+D+E >= 3) {
            break;
        }
        num++;
    }

    cout << num;

    return 0;
}