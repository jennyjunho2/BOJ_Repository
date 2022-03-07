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
    sort(nums.begin(), nums.end());

    int max_sum = 0;
    while (next_permutation(nums.begin(), nums.end())) {
        int sum = 0;
        FOR(i, 0, N-1) {
            sum += abs(nums[i+1] - nums[i]);
        }
        if (sum > max_sum) { max_sum = sum; }
    }

    cout << max_sum;
    
    return 0;
}