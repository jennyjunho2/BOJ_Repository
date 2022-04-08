#include <bits/stdc++.h>
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

int main() { fastio

    cin >> N >> K;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    int sum = 0;
    FOR(i, 0, K) {
        sum += nums[i];
    }
    
    int max_sum = sum;
    FOR(j, K, N) {
        sum = sum + nums[j] - nums[j-K];
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;

    return 0;
}