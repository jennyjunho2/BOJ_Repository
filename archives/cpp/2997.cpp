#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    vector<int> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    if (nums[2] - nums[1] == nums[1] - nums[0]) {
        cout << 2*nums[2] - nums[1];
    } else if (nums[2] - nums[1] > nums[1] - nums[0]) {
        cout << (nums[2] + nums[1]) / 2;
    } else {
        cout << (nums[0] + nums[1]) / 2;
    }

    return 0;
}