#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, W, V, K;
int weight[101];
int value[101];
int dp[101][100001];
// dp[i][j] : i번째 물건까지 가방의 무게가 B일 때, 가방에 담긴 물건들의 가치의 합

int main() { fastio

    cin >> N >> K;
    FOR(i, 1, N+1) {
        cin >> weight[i] >> value[i];
    }

    FOR(i, 1, N+1) {
        int now_weight = weight[i];
        FOR(j, 1, K+1) {
            if (j >= now_weight) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-now_weight] + value[i]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[N][K];

    return 0;
}  