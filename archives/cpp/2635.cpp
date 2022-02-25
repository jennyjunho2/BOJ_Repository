#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums;
    vector<int> max_nums;
    int max_len = 0;
    FOR(i, N/2, N+1) {
        nums.clear();
        nums.push_back(N);
        nums.push_back(i);
        int nums_size = 2;
        while (true) {
            int a = nums[nums_size - 2];
            int b = nums[nums_size - 1];
            if (a >= b) {
                nums.push_back(a-b);
                nums_size++;
            } else {
                break;
            }
        }

        if (max_len < nums_size) {
            max_len = nums_size;
            max_nums.assign(nums.begin(), nums.end());
        }
    }

    cout << max_len << endl;
    FOR(i, 0, max_len) {
        cout << max_nums[i] << ' ';
    }
    
    return 0;
}