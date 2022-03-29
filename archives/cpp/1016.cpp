#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
ll a, b;
vector<bool> sieve;

int main() {fastio

    cin >> a >> b;
    sieve.resize(b-a+1);
    int cnt = b-a+1;
    for(ll i = 2; i < sqrt(b)+1; i++) {
        ll sq = i*i;
        for (ll j = sq*((a-1)/sq + 1); j <= b; j += sq) {
            if (!sieve[j-a]) {
                sieve[j-a] = true;
                cnt--;
            }
        }
    }

    cout << cnt;


    return 0;
}