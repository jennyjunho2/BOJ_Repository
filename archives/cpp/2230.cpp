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

int main() {fastio

    cin >> N >> M;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());

    int ptr1 = 0, ptr2 = 0;
    int min_diff = INT_MAX;
    while(ptr1 < N && ptr2 < N) {
        int diff = nums[ptr2] - nums[ptr1];
        if (diff < M) {
            ptr2++;
        } else {
            min_diff = min(min_diff, diff);
            ptr1++;
        }
    }

    cout << min_diff;
    
    return 0;
}