#include <bits/stdc++.h>
#define MOD 1000000;
using namespace std;

int dp[1500000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin >> n;

    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i < 1500000; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }

    cout << dp[n % 1500000];

    return 0;
}