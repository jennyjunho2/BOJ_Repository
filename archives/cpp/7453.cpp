#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
ll nums[4][4000];
vector<ll> CD_sum;

int main() {fastio
    
    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, 4) {
            cin >> nums[j][i];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            CD_sum.push_back(nums[2][i] + nums[3][j]);
        }
    }
    sort(CD_sum.begin(), CD_sum.end());

    ll cnt = 0;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            ll temp_sum = nums[0][i] + nums[1][j];
            ll left = lower_bound(CD_sum.begin(), CD_sum.end(), -temp_sum) - CD_sum.begin();
            ll right = upper_bound(CD_sum.begin(), CD_sum.end(), -temp_sum) - CD_sum.begin();

            if (CD_sum[left] + temp_sum == 0) {
                cnt += (right - left);
            }
        }
    }

    cout << cnt;

    return 0;
}