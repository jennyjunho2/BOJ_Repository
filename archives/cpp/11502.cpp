#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
bool is_prime[1000];
vector<int> primes;

void sieve(){
    memset(is_prime, 1, sizeof(is_prime));
    is_prime[0] = false; is_prime[1] = false;
    FOR(i, 2, sqrt(1000)+1) {
        if (is_prime[i]) {
            for (int j = i*i; j < 1000; j += i) {
                is_prime[j] = false;
            }
        }
    }

    FOR(i, 2, 1000) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {fastio
    
    sieve();

    int primes_size = primes.size();
    TC {
        int K; cin >> K;
        bool is_found = false;
        FOR(i, 0, primes_size) {
            FOR(j, i, primes_size) {
                FOR(k, j, primes_size) {
                    if (primes[i] + primes[j] + primes[k] == K) {
                        cout << primes[i] << ' ' << primes[j] << ' ' << primes[k] << endl;
                        is_found = true;
                        break;
                    }
                }
                if (is_found) { break; }
            }
            if (is_found) { break; }
        }

        if (!is_found) {
            cout << 0 << endl;
        }
    }
    

    return 0;
}
