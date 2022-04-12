#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<ll> nums;
ll ans[3];

int main() { fastio

    cin >> N; nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(ALL(nums));

    ll sum = LLONG_MAX;
    ans[0] = nums[0]; ans[1] = nums[1]; ans[2] = nums[N-1];
    FOR(i, 0, N) {
        int left = i+1, right = N-1;
        while (left < right) {
            ll temp_sum = nums[i] + nums[left] + nums[right];
            if (sum > abs(temp_sum)) {
                sum = abs(temp_sum);
                ans[0] = nums[i];
                ans[1] = nums[left];
                ans[2] = nums[right];
            }
            if (temp_sum > 0) {
                right--;
            } else {
                left++;
            }
        }
    }

    sort(ans, ans+3);
    FOR(i, 0, 3) { cout << ans[i] << ' '; }

    return 0;
}