#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

long long sum[1000001];
long long dp[1000001];

int main() {
    fastio

    FOR(i, 1, 1000001) {
        for (int j = 1; i*j <= 1000000; j++) {
            dp[i*j] += i;
        }
        sum[i] = sum[i-1] + dp[i];
    }

    int T; cin >> T;
    while (T--){
        int N; cin >> N;
        cout << sum[N] << endl;
    }
    

    return 0;
}