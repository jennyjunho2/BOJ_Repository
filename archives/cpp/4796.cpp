#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int case_cnt = 0;
    while (true) {
        int L, P, V; cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) { break; }
        case_cnt++;
        cout << "Case " << case_cnt << ": ";


        cout << (V%P < L ? L * (V/P) + V%P : L * (V/P) + L) << endl;

    }

    return 0;
}