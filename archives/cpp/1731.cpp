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

    int N; cin >> N;
    vector<int> nums;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    if (nums[2]-nums[1] == nums[1]-nums[0]) {
        cout << nums.back() + (nums[2] - nums[1]);
    } else {
        cout << nums.back() * (nums[2] / nums[1]);
    }

    return 0;
}