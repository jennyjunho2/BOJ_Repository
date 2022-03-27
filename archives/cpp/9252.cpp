#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
string S1, S2;
int dp[1001][1001];

int main() {fastio

    cin >> S1 >> S2;
    int S1_size = S1.size();
    int S2_size = S2.size();

    FOR(i, 0, S2_size+1) {
        FOR(j, 0, S1_size+1) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (S2[i-1] == S1[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    string ans = "";
    int row = S2_size, col = S1_size;
    while (dp[row][col] != 0) {
        if (dp[row][col] != dp[row-1][col] && dp[row][col] != dp[row][col-1]) {
            row--; col--;
            ans += S2[row];
        } else if (dp[row][col] == dp[row-1][col]) {
            row--;
        } else if (dp[row][col] == dp[row][col-1]) {
            col--;
        }
    }

    reverse(ans.begin(), ans.end());
    
    cout << dp[S2_size][S1_size] << endl;
    if (dp[S2_size][S1_size] != 0) {
        cout << ans;
    }

    return 0;
}