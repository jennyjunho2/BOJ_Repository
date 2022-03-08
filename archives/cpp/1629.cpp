#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

ll power(ll a, ll b, ll mod) {
    if (b == 1) {
        return a % mod;
    }
    
    ll num = power(a, b/2, mod);
    ll val = num*num % mod;
    if (b%2 == 0) {
        return val;
    } else {
        return val*a % mod;
    }
}

int main() {
    fastio

    ll a, b, c; cin >> a >> b >> c;
    cout << power(a, b, c);
        
    return 0;
}