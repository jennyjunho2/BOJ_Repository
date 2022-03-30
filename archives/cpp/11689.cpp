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
ull n;
bool is_prime[1000001];

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = false; is_prime[1] = false;
    FOR(i, 2, sqrt(1000001)+1) {
        if(is_prime[i]) {
            for (int j = i*i; j <= 1000000; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {fastio

    sieve();

    cin >> n;
    ull ans = n;
    FOR(i, 2, sqrt(n)+1) {
        if (n%i == 0) {
            while (n%i == 0) {
                n /= i;
            }
            ans = ans / i * (i-1);
        }
    }

    if (n > 1) { ans = ans / n * (n-1); };

    cout << ans;

    return 0;
}