#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int L, n;
vector<int> nums;

int main() { fastio

    cin >> L;
    nums.resize(L);
    FOR(i, 0, L) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());
    cin >> n;

    int idx = lower_bound(nums.begin(), nums.end(), n) - nums.begin();
    if (idx == 0) {
        cout << max(0, (nums[0]-n)*n - 1);
    } else {
        cout << max(0, (nums[idx]-n)*(n-nums[idx-1]) - 1);
    }

    return 0;
} 