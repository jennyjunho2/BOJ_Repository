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
        cout << "Battle " << i << ": ";
        int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
        int gandalf = a + 2*b + 3*c + 3*d + 4*e + 10*f;
        int A, B, C, D, E, F, G; cin >> A >> B >> C >> D >> E >> F >> G;
        int sauron = A + 2*B + 2*C + 2*D + 3*E + 5*F + 10*G;

        if (sauron > gandalf) {
            cout << "Evil eradicates all trace of Good" << endl;
        } else if (sauron == gandalf) {
            cout << "No victor on this battle field" << endl;
        } else {
            cout << "Good triumphs over Evil" << endl;
        }
    }

    return 0;
}