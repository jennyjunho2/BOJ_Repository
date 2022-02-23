#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

bool primes[1001];

void sieve() {
    FOR(i, 2, 1001){
        primes[i] = true;
    }
    primes[0] = false; primes[1] = false;
    FOR(i, 2, sqrt(1001)) {
        if (primes[i]) {
            for (int j = i*i; j < 1001; j += i){
                primes[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    int arr[100];
    int cnt = 0;
    FOR(i, 0, N){
        cin >> arr[i];
    }
    sieve();

    FOR(i, 0, N){
        if (primes[arr[i]] == true) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}