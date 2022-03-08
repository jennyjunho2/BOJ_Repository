#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int sum = 0;
        FOR(i, 1, n+1) {
            int T = (i+1)*(i+2) / 2;
            sum += i*T;
        }

        cout << sum << endl;
    }

    return 0;
}