#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int a, b;
bool is_prime[10000000];

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    FOR(i, 2, sqrt(10000000)+1) {
        if (is_prime[i]) {
            for (int j = i*i; j < 10000000; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool is_palindrome(string str) {
    string s1, s2;
    s1 = str;
    reverse(str.begin(), str.end());
    s2 = str;

    return s1 == s2 ? true : false;
}

int main() { fastio

    sieve();
    cin >> a >> b;
    FOR(i, a, 10000000) {
        if (i > b) { break; }

        if (is_palindrome(to_string(i)) && is_prime[i]) {
            cout << i << endl;
        }
    }

    cout << -1;

    return 0;
}