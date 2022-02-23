#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    vector<int> nums;
    while (T--) {
        nums.clear();
        int n; cin >> n;
        while (n--) {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());

        int ans = 0;
        FOR(i, 0, nums.size() - 1){
            ans += nums[i+1] - nums[i];
        }
        cout << ans * 2 << endl;
    }    

    return 0;
}