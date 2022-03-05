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
    vector<int> acc_nums(N);
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    partial_sum(nums.begin(), nums.end(), acc_nums.begin());
    int sum = 0;
    FOR(i, 0, N) {
        sum += acc_nums[i];
    }

    cout << sum;

    return 0;
}