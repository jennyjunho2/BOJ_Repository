#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> nums;
vector<int> LIS;

int main() {fastio
    
    cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    int cnt = 0;
    LIS.push_back(INT_MIN);
    FOR(i, 0, N) {
        int LIS_back = LIS.back();
        if (LIS_back < nums[i]) {
            LIS.push_back(nums[i]);
            cnt++;
        } else {
            auto it = lower_bound(LIS.begin(), LIS.end(), nums[i]);
            *it = nums[i];
        }
    }

    cout << N - cnt;

    return 0;
}
