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

    int N, h; cin >> N;
    FOR(i, 0, N) {
        cin >> h;
        nums.push_back(h);
    }

    reverse(nums.begin(), nums.end());
    int cnt = 1;
    int max = nums[0];
    FOR(i, 1, N) {
        if (nums[i] > max) {
            cnt++;
            max = nums[i];
        }
    }

    cout << cnt;

    return 0;
}