#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

// https://www.acmicpc.net/problem/1038
bool is_prime[10000];
void sieve() {
    is_prime[0] = false; is_prime[1] = false;
    FOR(i, 2, sqrt(10000)+1) {
        if (is_prime[i]) {
            for (int j = i*2; j*j < 10000; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {fastio

    sieve();

    TC {

    }

    return 0;
}