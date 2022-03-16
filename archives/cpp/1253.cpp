#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N;
vector<int> nums;

int main() {
    fastio

    cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());
    
    int cnt = 0;
    FOR(i, 0, N) {
        int temp = nums[i];
        int left = 0, right = N-1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == temp) {
                if (left != i && right != i) {
                    cnt++;
                    break;
                } else if (left == i) {
                    left++;
                } else if (right == i) {
                    right--;
                }
            } else if (sum < temp) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << cnt;

    return 0;
}