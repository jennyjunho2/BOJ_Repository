#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

bool sieve[2000001];
vector<ll> primes;

int main() {
    fastio

    sieve[0] = false; sieve[1] = false;
    memset(sieve, 1, sizeof(sieve));
    FOR(i, 2, sqrt(2000001)+1) {
        if (sieve[i]) {
            for (int j = i*i; j < 2000001; j += i) {
                sieve[j] = false;
            }
        }
    }

    FOR(i, 2, 2000001) {
        if (sieve[i]) { primes.push_back((ll)i); };
    }

    int T; cin >> T;
    while (T--) {
        ll a, b; cin >> a >> b;
        ll sum = a+b;
        
        if (sum == 2 || sum == 3) {
            cout << "NO" << endl;
        } else if (sum % 2 == 0) {
            // °ñµå¹ÙÈåÀÇ ÃßÃø
            cout << "YES" << endl;
        } else {
            S -= 2;
            bool is_prime = true;
            for (ll num: primes) {
                if (num >= sum) {
                    break;
                }

                if (sum % num == 0) {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}