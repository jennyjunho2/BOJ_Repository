#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000007
int N;
ll matrix[2][2] = {{1, 1}, {1, 0}};
ll ans[2][2] = {{1, 0}, {0, 1}};

void mul(ll a[][2], ll b[][2]) {
    ll temp[2][2] = {{0, 0}, {0, 0}};
    FOR(i, 0, 2) {
        FOR(j, 0, 2) {
            FOR(k, 0, 2) {
                temp[i][j] += (a[i][k] * b[k][j])%MOD;
            }
        }
    }

    FOR(i, 0, 2) {
        FOR(j, 0, 2) {
            a[i][j] = temp[i][j] % MOD;
        }
    }
}

int main() {
    fastio

    cin >> N;
    
    if (N <= 1) {
        cout << N; return 0;
    }

    while (N > 0) {
        if (N%2 == 1) {
            mul(ans, matrix);
        }
        mul(matrix, matrix);
        N /= 2;
    }

    cout << ans[0][1];

    return 0;
}