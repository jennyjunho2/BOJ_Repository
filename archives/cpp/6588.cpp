#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

bool is_prime(const int& a) {
    if (a == 1) { return false; }
    FOR(i, 2, sqrt(a)+1) {
        if (a%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int n; cin >> n;
        if (n == 0) { break; }

        for (int i = 1; i <= n/2; i++) {
            if (is_prime(i) && is_prime(n-i)) {
                cout << n << " = " << i << " + " << n-i << endl;
                break;
            }
        }
    }

    return 0;
}