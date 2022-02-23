#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums(9);
    int sum = 0;
    FOR(i, 0, 9){
        cin >> nums[i];
        sum += nums[i];
    }
    sort(nums.begin(), nums.end());

    FOR(i, 0, 9) {
        int temp = nums[i];
        FOR(j, i+1, 9) {
                if (sum - nums[i] - nums[j] == 100) {
                    FOR(k, 0, 9) {
                        if (k == i || k == j) {
                            continue;
                        } else {
                            cout << nums[k] << endl;
                        }
                    }
                    return 0;
                }
            }
        }
}