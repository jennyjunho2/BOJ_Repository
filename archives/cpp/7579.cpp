#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int memory[101];
int cost[101];
int dp[101][10001];

int main() {fastio

    cin >> N >> M;
    FOR(i, 1, N+1) { cin >> memory[i]; }

    int sum = 0;
    FOR(i, 1, N+1) {
        cin >> cost[i];
        sum += cost[i];
    }

    FOR(i, 1, N+1) {
        int temp_memory = memory[i];
        int temp_cost = cost[i];
        FOR(j, 0, sum+1) {
            if (j >= temp_cost) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-temp_cost] + temp_memory);
            }

            dp[i][j] = max(dp[i][j], dp[i-1][j]);
        }
    }

    FOR(i, 0, sum+1) {
        if (dp[N][i] >= M) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
