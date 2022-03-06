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

    int T; cin >> T;
    FOR(i, 1, T+1) {
        cout << "Scenario #" << i << ':'  << endl;
        long long n, m; cin >> n >> m;

        cout << (m+n) * (m-n+1) / 2 << endl << endl;
    }

    return 0;
}