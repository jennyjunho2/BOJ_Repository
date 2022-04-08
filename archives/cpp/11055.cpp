#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int nums[1001];
int dp[1001];

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) { 
        cin >> nums[i];
        dp[i] = nums[i];
    }

    FOR(i, 0, N){
        FOR(j, 0, i) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + nums[i]);
            }
        }
    }

    cout << *max_element(dp, dp+N);

    return 0;
}