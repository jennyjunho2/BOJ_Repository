#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;
vector<int> nums;
vector<int> LIS;

int main() {fastio

    int T; cin >> T;
    FOR(tc, 1, T+1) {
        cout << "Case #" << tc << endl;
        nums.clear(); LIS.clear();
        cin >> N >> K;
        nums.resize(N);
        FOR(i, 0, N) { cin >> nums[i]; }

        LIS.push_back(INT_MIN);

        int cnt = 0;
        FOR(i, 0, N) {
            int num = nums[i];
            if (num > LIS.back()) {
                LIS.push_back(num);
                cnt++;
            } else {
                auto it = lower_bound(LIS.begin(), LIS.end(), num);
                *it = num;
            }
        }

        cout << (cnt >= K ? 1 : 0) << endl;
    }

    return 0;
}
