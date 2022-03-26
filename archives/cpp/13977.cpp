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

ll factorial_mod[4000001];

int main() { fastio

    factorial_mod[0] = 1;
    FOR(i, 1, 4000001) {
        factorial_mod[i] = factorial_mod[i-1] * i % MOD;
    }

    TC {
        cin >> N >> K;

        ll ans = factorial_mod[N] * POW(factorial_mod[K] * factorial_mod[N-K] % MOD, MOD-2) % MOD;
        cout << ans << endl;
    }
    
    return 0;
} 