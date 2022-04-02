#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N; ll C;
vector<ll> nums;
vector<ll> lower_half;
vector<ll> upper_half;

void part_sum(int start, int end, vector<ll>& v, ll sum) {
    if (start > end) {
        v.push_back(sum);
        return;
    }

    part_sum(start+1, end, v, sum);
    part_sum(start+1, end, v, sum + nums[start]);
}

int main() {fastio
    
    cin >> N >> C;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    int half = N/2;

    part_sum(0, half, lower_half, 0);
    part_sum(half+1, N-1, upper_half, 0);
    sort(upper_half.begin(), upper_half.end());

    ll cnt = 0;
    int lower_half_size = lower_half.size();
    FOR(i, 0, lower_half_size) {
        ll temp = lower_half[i];
        cnt += upper_bound(upper_half.begin(), upper_half.end(), C-temp) - upper_half.begin();
    }

    cout << cnt;
    
    return 0;
}
