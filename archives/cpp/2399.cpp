#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    FOR(i, 0, n) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    int sum = 0;
    FOR(i, 0, n) {
        FOR(j, i+1, n) {
            sum += 2 * abs(nums[i] - nums[j]);
        }
    }

    cout << sum;
    
    return 0;
}