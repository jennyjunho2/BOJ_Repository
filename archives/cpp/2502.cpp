#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int D, K; cin >> D >> K;
    int dp[D+1][2] = {0, };

    dp[1][0] = 1; dp[1][1] = 0;
    dp[2][0] = 0; dp[2][1] = 1;
    FOR(i, 3, D+1) {
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
    int A_coef = dp[D][0], B_coef = dp[D][1];

    FOR(b, 1, K) {
        FOR(a, 1, b+1) {
            if (a*A_coef + b*B_coef == K) {
                cout << a << endl << b;
                return 0;
            }
        }
    }

    return 0;
}