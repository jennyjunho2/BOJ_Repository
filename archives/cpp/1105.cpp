#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    string L, R; cin >> L >> R;
    int cnt = 0;
    int L_size = L.size();
    int R_size = R.size();
    if (L_size == R_size) {
        FOR(i, 0, L_size) {
            if (L[i] == R[i] && R[i] == '8') {
                cnt++;
            } else if (L[i] != R[i]){
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}