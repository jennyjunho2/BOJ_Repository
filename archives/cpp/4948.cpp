#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

bool primes[2*123456+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(primes, true, sizeof(primes));
    primes[0] = false; primes[1] = false;
    FOR(i, 2, sqrt(2*123456+1)){
        if (primes[i]) {
            for (int j = i*i; j < 2*123456+1; j += i) {
                primes[j] = false;
            }
        }
    }

    while (true) {
        int n; cin >> n;
        if (n == 0) { return 0; }
        int cnt = 0;
        FOR(i, n+1, 2*n+1) {
            if (primes[i]) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}