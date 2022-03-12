#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000000
ll combination[400][200];

int main() {
    fastio

    int N, K; cin >> N >> K;
    FOR(i, 1, N+K) {
        FOR(j, 0, K) {
            if (j == 0) {
                combination[i][j] = 1;
            } else if (j == 1) {
                combination[i][j] = i;
            } else {
                combination[i][j] = (combination[i-1][j] + combination[i-1][j-1]) % MOD;
            }
        }
    }

    cout << combination[N+K-1][K-1];

    return 0;
}