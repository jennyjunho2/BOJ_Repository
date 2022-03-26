#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000007
int N, K;

ll POW(ll a, ll exp) {
    if (exp == 0) { return 0; }
    else if (exp == 1) { return a; }

    ll val = POW(a, exp/2);
    val = val * val % MOD;
    if (exp & 1) {
        return val * a % MOD;
    } else {
        return val;
    }
}

int main() { fastio

    cin >> N >> K;
    ll first = 1;
    FOR(i, 1, N+1) {
        first *= i; first %= MOD;
    }

    ll second = 1;
    FOR(i, 1, K+1) {
        second *= i; second %= MOD;
    }
    FOR(i, 1, N-K+1) {
        second *= i; second %= MOD;
    }

    ll ans = first * POW(second, MOD-2) % MOD;
    cout << ans;

    return 0;
} 