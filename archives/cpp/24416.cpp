#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int fib[42];

int main() { fastio

    fib[1] = 0; fib[2] = 1;
    FOR(i, 3, 42) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int n; cin >> n;
    cout << fib[n+1] << ' ' << n-2;

    return 0;
} 