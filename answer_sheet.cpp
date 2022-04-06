#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
// https://www.acmicpc.net/problem/2568
using p = pair<int, int>;
int N;
vector<p> nums;
int dp[100001];
vector<int> v, LIS_exclude;

int main() {fastio

    cin >> N; nums.resize(N);
    FOR(i, 0, N) {
        cin >> nums[i].first >> nums[i].second;
    }

    sort(nums.begin(), nums.end());

    v.push_back(nums[0].second);
    FOR(i, 1, N) {
        int temp = nums[i].second;
        if (temp > v.back()) {
            v.push_back(temp);
            dp[i] = v.size()-1;
        } else {
            auto it = lower_bound(v.begin(), v.end(), temp);
            *it = temp;
            dp[i] = it - v.begin();
        }
    }

    int cnt = v.size();
    cout << N - cnt << endl;
    cnt--;
    for (int i = N-1; i >= 0; i--) {
        if (dp[i] == cnt) {
            cnt--;
            continue;
        }
        LIS_exclude.push_back(nums[i].first);
    }

    int LIS_exclude_size = LIS_exclude.size();
    FOR(i, 0, LIS_exclude_size) {
        cout << LIS_exclude[i] << endl;
    }

    return 0;
}
