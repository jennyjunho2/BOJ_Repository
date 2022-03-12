#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<int> nums;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int n, K; cin >> n >> K;
        nums.clear();
        nums.resize(n);
        FOR(i, 0, n) { cin >> nums[i]; }
        sort(nums.begin(), nums.end());

        int diff = 2147483647;
        int cnt = 0;
        int left = 0, right = n-1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            int diff_temp = abs(K-sum);

            if (diff_temp == diff) {
                cnt++;
            } else if (diff_temp < diff) {
                cnt = 1;
                diff = diff_temp;
            }

            if (sum <= K) {
                left++;
            } else {
                right--;            
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}