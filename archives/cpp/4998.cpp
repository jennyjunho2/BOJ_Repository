#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    while (true) {
        double N, B, M; cin >> N >> B >> M;
        if (cin.eof()) { break; }
        int cnt = 0;
        while (N <= M) {
            N *= (1+0.01*B);
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}