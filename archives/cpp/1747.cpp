#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
bool is_prime[2000001];

bool is_palindrome(int x) {
    if (x%10 == 0) { return false; }

    int x_rev = 0;
    while (x > x_rev) {
        x_rev = x_rev*10 + x%10;
        x /= 10;
    }

    return x == x_rev || x== x_rev/10;
}

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = false; is_prime[1] = false;
    FOR(i, 2, sqrt(2000001)+1) {
        if (is_prime[i]) {
            for (int j = i*i; j < 2000001; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {fastio

    sieve();
    cin >> N;
    while (true) {
        if (is_prime[N] && is_palindrome(N)) {
            cout << N;
            return 0;
        }
        N++;
    }

    return 0;
}