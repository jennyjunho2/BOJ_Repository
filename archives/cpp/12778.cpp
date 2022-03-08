#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int M; char inst; cin >> M >> inst;
        if (inst == 'C') {
            FOR(i, 0, M) {
                char ch; cin >> ch;
                cout << ch - 'A' + 1 << ' ';
            }
            cout << endl;
        } else {
            FOR(i, 0, M) {
                int num; cin >> num;
                cout << char(num - 1 + 'A') << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}