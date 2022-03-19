#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, S;
vector<int> nums;
vector<int> acc_nums;

int main() {
    fastio
    
    cin >> N >> S;
    nums.resize(N);
    acc_nums.resize(N+1);
    FOR(i, 0, N) { cin >> nums[i]; }

    int left = 0, right = 0;
    int sum = nums[0];
    int min_len = N+1;
    while (left <= right && right < N) {
        if (sum < S) {
            sum += nums[++right];
        } else {
            min_len = min(min_len, right-left+1);
            sum -= nums[left++];
        }
    }

    cout << (min_len == N+1 ? 0 : min_len);

    return 0;
} 