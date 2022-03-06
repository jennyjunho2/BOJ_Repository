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
        int a; cin >> a;
        char calc; cin >> calc;
        int b; cin >> b;
        char dummy; cin >> dummy;
        int result; cin >> result;

        cout << "Case " << i << ": ";
        if (calc == '+') {
            if (a+b == result) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (a-b == result) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}