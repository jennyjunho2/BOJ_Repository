#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int func(int N, int r, int c) {
    if (N == 0) { return 0; }

    int half = 1<<(N-1);
    
    if (half > r && half > c) {
        return func(N-1, r, c);
    } else if (half > r && half <= c) {
        return half*half + func(N-1, r, c-half);
    } else if (half <= r && half > c) {
        return half*half*2 + func(N-1, r-half, c);
    } else {
        return half*half*3 + func(N-1, r-half, c-half);
    }
}

int main() {
    fastio

    int N, r, c; cin >> N >> r >> c;
    cout << func(N, r, c);

    return 0;
}