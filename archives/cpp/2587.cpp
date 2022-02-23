#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums(5);
    int avg = 0;
    FOR(i, 0, 5) {
        cin >> nums[i];
        avg += nums[i];
    }
    
    sort(nums.begin(), nums.end());

    cout << avg / 5 << endl << nums[2];

    return 0;
}