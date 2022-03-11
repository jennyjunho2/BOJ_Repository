#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N, C; cin >> N >> C;
    int A = N, B = N;
    FOR(i, 0, C) {
        int X, Y; cin >> X >> Y;
        if (X >= A || Y >= B) {
            continue;
        }

        int sero_cut = Y * A;
        int garo_cut = X * B;
        if (sero_cut > garo_cut) {
            B = Y;
        } else {
            A = X;
        }
        // cout << A << ' ' << B << endl;
    }

    cout << A*B;
    
    return 0;
}