#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums(10);
    int T; cin >> T;
    while (T--) {
        nums.clear();
        FOR(i, 0, 10){
            int temp; cin >> temp;
            nums.push_back(temp);
        }

        sort(nums.begin(), nums.end());
        cout << nums[7] << endl;
    }

    return 0;
}