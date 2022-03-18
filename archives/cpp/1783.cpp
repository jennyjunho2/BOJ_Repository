#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;

int main() {
    fastio

    cin >> N >> M;
    if (N == 1) {
        cout << 0;
    } else if (N == 2) {
        cout << min(4, (M+1)/2);
    } else {
        if (M < 7) {
            cout << min(4, M);
        } else {
            cout << M-2;
        }
    }

    return 0;
}