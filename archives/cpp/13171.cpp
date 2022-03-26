#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using ull = unsigned long long;
#define MOD 1000000007
ull A, X;

int main() { fastio

    cin >> A >> X;
    ull base = A % MOD;
    ull ans = 1;
    while (X) {
        if (X & 1) {
            ans = ans * base % MOD;
        }
        base = base*base % MOD;
        X >>= 1;
    }

    cout << ans;
    
    return 0;
} 