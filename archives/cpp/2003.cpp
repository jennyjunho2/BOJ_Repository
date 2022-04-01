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
vector<int> acc_nums;

int main() {fastio
    
    cin >> N >> M;
    nums.resize(N);
    FOR(i, 0, N) {
        cin >> nums[i];
    }

    acc_nums.resize(N+1);
    acc_nums[0] = 0;
    FOR(i, 1, N+1) {
        acc_nums[i] = acc_nums[i-1] + nums[i-1];
    }

    int left = 0, right = 0;
    int cnt = 0;
    while(left <= right && right <= N) {
        int temp_sum = acc_nums[right] - acc_nums[left];
        if (temp_sum < M) {
            right++; continue;
        } else {
            if (temp_sum == M) { cnt++; }
            left++;
        }
    }

    cout << cnt;

    return 0;
}
