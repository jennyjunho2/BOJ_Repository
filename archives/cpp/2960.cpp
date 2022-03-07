#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    bool sieve[N+1];
    int cnt = 0;

    memset(sieve, true, sizeof(sieve));
    sieve[0] = false; sieve[1] = false;
    FOR(i, 2, N+1) {
        if (sieve[i]) {
            for (int j = i; j < N+1; j += i) {
                if (sieve[j]) {
                    sieve[j] = false;
                    cnt++;
                }
                if (cnt == K) {
                    cout << j;
                    return 0;
                }
            }
        }
    }

    return 0;
}