#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word; cin >> word;
    vector<int> nums;
    for (auto i: word) {
         nums.push_back(i - '0');
    }

    sort(nums.begin(), nums.end(), greater<int>());
    FOR(i, 0, nums.size()){
        cout << nums[i];
    }

    return 0;
}