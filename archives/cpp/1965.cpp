#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int boxes[1001];
int dp[1001];

int main() {
    fastio

    int n; cin >> n;
    FOR(i, 0, n) {
        cin >> boxes[i];
    }
    fill(dp, dp+1001, 1);

    // LIS
    FOR(i, 0, n) {
        FOR(j, 0, i) {
            if (boxes[j] < boxes[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << *max_element(dp, dp+n);

    return 0;
}