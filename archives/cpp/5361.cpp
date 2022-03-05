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
    while (T--) {
        int A, B, C, D, E; cin >> A >> B >> C >> D >> E;
        cout << fixed;
        cout.precision(2);
        cout << '$' << A*350.34 + B*230.90 + C*190.55 + D*125.30 + E*180.90 << endl;
    }

    return 0;
}