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
vector<ll> nums;

int main() { fastio

    cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    int left = 0, right = N-1;
    int ans = abs(nums[left] + nums[right]);
    ll A = nums[left], B = nums[right];
    while (left < right) {
        int temp = nums[left] + nums[right];
        if (abs(temp) < ans) {
            ans = abs(temp);
            A = nums[left]; B = nums[right];
        }

        if (temp < 0) {
            left++;
        } else if (temp > 0) {
            right--;
        } else {
            break;
        }
    }

    cout << A << ' ' << B;

    return 0;
}