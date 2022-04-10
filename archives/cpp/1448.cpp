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
int nums[1000001];

int main() { fastio

    cin >> N;
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums, nums+N);

    for (int i = N-3; i >= 0; i--) {
        if (nums[i+2] < nums[i+1] + nums[i]) {
            cout << nums[i] + nums[i+1] + nums[i+2];
            return 0;
        }
    }

    cout << -1;

    return 0;
}