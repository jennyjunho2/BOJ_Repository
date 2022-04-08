#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
vector<int> nums;

int main() { fastio

    cin >> N >> M;
    nums.resize(N+M);
    FOR(i, 0, N+M) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    for (auto i: nums) {
        cout << i << ' ';
    }

    return 0;
}