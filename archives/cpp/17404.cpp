#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define R 0
#define G 1
#define B 2
#define BIG 987654321
int N;
int cost[1001][3];
int dp[1001][3];

int main() { fastio

    cin >> N;
    FOR(i, 1, N+1) {
        cin >> cost[i][R] >> cost[i][G] >> cost[i][B]; 
    }

    int result = BIG;
    FOR(init, 0, 3) {
        FOR(j, 0, 3) {
            if (init == j) {
                dp[1][j] = cost[1][j];
            } else {
                dp[1][j] = BIG;
            }
        }

        FOR(i, 2, N+1) {
            dp[i][R] = min(dp[i-1][G], dp[i-1][B]) + cost[i][R];
            dp[i][G] = min(dp[i-1][R], dp[i-1][B]) + cost[i][G];
            dp[i][B] = min(dp[i-1][R], dp[i-1][G]) + cost[i][B];
        }

        FOR(j, 0, 3) {
            if (init != j) {
                result = min(result, dp[N][j]);
            }
        }
    }

    cout << result;

    return 0;
} 