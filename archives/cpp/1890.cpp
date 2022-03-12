#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//-------------------------------------
int nums[100][100];
long long dp[100][100];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> nums[i][j];
        }
    }

    dp[0][0] = 1;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            long long dp_temp = dp[i][j];
            int jump = nums[i][j];
            if (dp_temp == 0 || (i == N-1 && j == N-1)) {
                continue;
            }
            if (i+jump < N) {
                dp[i+jump][j] += dp_temp;
            }

            if (j+jump < N) {
                dp[i][j+jump] += dp_temp;
            }
        }
    }

    cout << dp[N-1][N-1];

    return 0;
}