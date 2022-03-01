#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int nums[1001];
int dp[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    FOR(i, 1, N+1){
        cin >> nums[i];
        dp[i] = 1;
    }

    FOR(i, 1, N+1){
        FOR(j, 1, i) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    int max_len = 0;
    FOR(i, 1, N+1) {
        max_len = max(max_len, dp[i]);
    }
    cout << max_len;

    return 0;
}