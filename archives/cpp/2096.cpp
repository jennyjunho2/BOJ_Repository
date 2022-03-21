#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int max_dp[3];
int min_dp[3];
int input[3];

int main() {
    fastio

    int N; cin >> N;
    cin >> max_dp[0] >> max_dp[1] >> max_dp[2];
    memcpy(min_dp, max_dp, sizeof(max_dp));
    
    FOR(i, 1, N) {
        cin >> input[0] >> input[1] >> input[2];
        int tmp_0 = max_dp[0], tmp_1 = max_dp[1], tmp_2 = max_dp[2];

        max_dp[0] = max(tmp_0, tmp_1) + input[0];
        max_dp[1] = max({tmp_0, tmp_1, tmp_2}) + input[1];
        max_dp[2] = max(tmp_1, tmp_2) + input[2];

        tmp_0 = min_dp[0]; tmp_1 = min_dp[1]; tmp_2 = min_dp[2];

        min_dp[0] = min(tmp_0, tmp_1) + input[0];
        min_dp[1] = min({tmp_0, tmp_1, tmp_2}) + input[1];
        min_dp[2] = min(tmp_1, tmp_2) + input[2];
    }

    cout << *max_element(max_dp, max_dp+3) << ' ' << *min_element(min_dp, min_dp+3);

    return 0;
} 