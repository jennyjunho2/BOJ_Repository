#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
int K;
int cost[501];
int cost_sum[501];
int dp[501][501];

int seg(int left, int right) {
    if (dp[left][right] != INF) { return dp[left][right]; }

    if (left == right) {
        dp[left][right] = 0;
        return 0;
    }
    
    if (left + 1 == right) {
        dp[left][right] = cost[left] + cost[right];
        return dp[left][right];
    }

    FOR(i, left, right+1) {
        dp[left][right] = min(dp[left][right], seg(left, i) + seg(i+1, right));
    }

    dp[left][right] += cost_sum[right] - cost_sum[left-1];
    return dp[left][right];
}

int main() {fastio
    
    TC {
        fill(&dp[0][0], &dp[0][0]+501*501, INF);
        cost_sum[0] = 0;
        cin >> K;
        FOR(i, 1, K+1) {
            cin >> cost[i];
            cost_sum[i] = cost_sum[i-1] + cost[i];
        }
        cout << seg(1, K) << endl;
    }

    return 0;
}