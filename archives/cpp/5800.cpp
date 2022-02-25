#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K; cin >> K;
    int cnt = 1;
    while (K--) {
        nums.clear();
        int N; cin >> N;
        int temp;
        FOR(i, 0, N) {
            cin >> temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end());
        int gap = 0;
        FOR(i, 0, N-1){
            gap = max(gap, nums[i+1] - nums[i]);
        }

        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        cout << "Class " << cnt << endl;
        cout << "Max " << max << ", Min " << min <<", Largest gap " << gap << endl;
        cnt++;
    }

    return 0;
}