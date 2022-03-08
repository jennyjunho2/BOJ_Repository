#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        FOR(i, 0, N) {
            if (i == 0 || i == (N-1)) {
                FOR(j, 0, N) {
                    cout << '#';
                }
                cout << endl;
            } else {
                cout << '#';
                FOR(j, 0, N-2) {
                    cout << 'J';
                }
                cout << '#' << endl;
            }
        }
        cout << endl;
    }

    return 0;
}