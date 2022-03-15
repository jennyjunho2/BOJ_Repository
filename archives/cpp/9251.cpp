#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int dp[1001][1001];

int main() {
    fastio

    string first, second;
    cin >> first; cin >> second;

    int first_size = first.size();
    int second_size = second.size();

    FOR(i, 0, first_size+1) {
        FOR(j, 0, second_size+1) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
                continue;
            } else if (first[i-1] == second[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    int max_len = 0;
    FOR(i, 0, first_size+1) {
        FOR(j, 0, second_size+1) {
            max_len = max(max_len, dp[i][j]);
        }
    }

    cout << max_len;

    return 0;
}