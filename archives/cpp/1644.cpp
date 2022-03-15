#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> primes;
vector<int> primes_acc;
int sieve[4000001];

int main() {
    fastio

    int N; cin >> N;
    memset(sieve, 1, sizeof(sieve));
    sieve[0] = 0;
    sieve[1] = 0;
    FOR(i, 2, sqrt(N)+1) {
        if (sieve[i]) {
            for (int j = i*i; j <= N; j += i) {
                sieve[j] = 0;
            }
        }
    }

    int sum = 0;
    primes_acc.push_back(0);
    FOR(i, 2, N+1) {
        if (sieve[i]) {
            sum += i;
            primes_acc.push_back(sum);
        }
    }

    int primes_acc_size = primes_acc.size();
    int left = 0, right = 0;
    int cnt = 0;
    while (left <= right && right < primes_acc_size) {
        int partial = primes_acc[right] - primes_acc[left];
        if (partial > N) {
            left++;
        } else if (partial < N) {
            right++;
        } else {
            cnt++;
            right++;
        }
    }

    cout << cnt;

    return 0;
}