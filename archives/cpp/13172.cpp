#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000007
int M;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a%b);
}

ll POW(ll base, ll exp) {
    if (exp == 1) {
        return base % MOD;
    }

    ll val = POW(base, exp/2);
    val = val * val % MOD;
    if (exp%2 != 0) {
        return base * val % MOD;
    } else {
        return val;
    }
}

int main() { fastio

    cin >> M;
    ll ans = 0;
    FOR(i, 0, M) {
        ll N, S; cin >> N >> S;
        ll g = gcd(max(N, S), min(N, S));
        S /= g; N /= g;
        ll inv = POW(N, MOD-2);

        ans += (S*inv % MOD);
        ans %= MOD;
    }

    cout << ans;

    return 0;
} 