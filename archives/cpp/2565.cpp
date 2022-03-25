#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N;
vector<p> nums;
int dp[101];

bool cmp(const p& a, const p& b) {
    return a.first < b.first;
}

int main() { fastio

    fill(dp, dp+101, 1);
    cin >> N;
    FOR(i, 0, N) {
        int a, b; cin >> a >> b;
        nums.push_back({a, b});
    }

    sort(nums.begin(), nums.end(), cmp);

    FOR(i, 1, N) {
        FOR(j, 0, i) {
            if (nums[j].second < nums[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << N - *max_element(dp+1, dp+N);

    return 0;
}  