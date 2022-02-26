#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

bool primes[1000001];
void sieve() {
    FOR(i, 0, 1000001) {
        primes[i] = true;
    }

    primes[0] = primes[1] = false;
    FOR(i, 2, sqrt(1000001)){
        if(primes[i]){
            for (int j = i*i; j < 1000001; j += i){
                primes[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N; cin >> M >> N;
    sieve();
    FOR(i, M, N+1) {
        if (primes[i]) {
            cout << i << endl;
        }
    }
    
    return 0;
}