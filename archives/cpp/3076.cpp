#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int R, C; cin >> R >> C;
    int A, B; cin >> A >> B;
    FOR(i, 0, R) {
        FOR(j, 0, A) {
            FOR(k, 0, C) {
                FOR(l, 0, B) {
                    if ((i+k)%2 == 0) {
                        cout << 'X';
                    } else {
                        cout << '.';
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}