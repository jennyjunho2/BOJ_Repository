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
int nums[1001];
int dp[1001];
vector<int> v, LIS;

int main() {fastio
    
    cin >> N;
    FOR(i, 1, N+1) { cin >> nums[i]; }

    v.push_back(nums[1]);

    int cnt = 0;
    FOR(i, 2, N+1) {
        int temp = nums[i];
        if (v[cnt] < temp) {
            v.push_back(temp);
            cnt++;
            dp[i] = cnt;
        } else {
            int idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
            v[idx] = temp;
            dp[i] = idx;
        }
    }

    for (int i = N; i >= 0; i--) {
        if (cnt == dp[i]) {
            LIS.push_back(nums[i]);
            cnt--;
        }
    }

    reverse(LIS.begin(), LIS.end());
    int LIS_size = LIS.size();
    cout << LIS_size << endl;
    FOR(i, 0, LIS_size) {
        cout << LIS[i] << ' ';
    }

    return 0;
}
