#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

bool primes[10001];
void sieve() {
    primes[0] = false; primes[1] = false;
    FOR (i, 2, 10001) {
        primes[i] = true;
    }

    FOR (i, 2, sqrt(10001)) {
        if (primes[i]) {
            for (int j = i*i; j < 10001; j += i) {
                primes[j] = false;
            }
        }
    }
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N;
    cin >> M;
    cin >> N;
    int min = -1;
    int sum = 0;

    sieve();

    FOR(i, M, N+1) {
        if (primes[i]) {
            if (min == -1) {
                min = i;
            }
            sum += i;
        }
    }
    
    if (sum == 0) {
        cout << -1;
        return 0;
    }

    cout << sum << endl << min;
    
    return 0;
}