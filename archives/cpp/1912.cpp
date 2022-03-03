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

    vector<int> nums;

    int n; cin >> n;
    FOR(i, 0, n){
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    FOR(i, 1, n) {
        nums[i] = max(nums[i], nums[i] + nums[i-1]);
    }

    cout << *max_element(nums.begin(), nums.end());

    return 0;
}