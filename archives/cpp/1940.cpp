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

    int N; cin >> N;
    int M; cin >> M;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    int left = 0, right = N-1;
    int cnt = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum < M) {
            left++;
            continue;
        } else if (sum == M)  {
            cnt++;
        }
        right--;
    }

    cout << cnt;

    return 0;
}