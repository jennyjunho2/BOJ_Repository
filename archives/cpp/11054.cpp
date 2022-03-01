#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int nums[1001];
int dp_max[1001];
int dp_min[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    FOR(i, 0, N){
        cin >> nums[i];
    }

    FOR(i, 0, N){
        dp_max[i] = 1;
        FOR(j, 0, i+1) {
            if (nums[i] > nums[j] && dp_max[i] < dp_max[j] + 1) {
                dp_max[i]++;
            }
        }
    }

    for (int i = N-1; i >= 0; i--){
        dp_min[i] = 1;
        for (int j = N-1; j >= i; j--) {
            if (nums[i] > nums[j] && dp_min[i] < dp_min[j] + 1) {
                dp_min[i]++;
            }
        }
    }

    int max_len = 0;
    FOR(i, 0, N) {
        max_len = max(max_len, dp_max[i] + dp_min[i] - 1);
    }
    cout << max_len;

    return 0;
}