#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n;
vector<int> nums;

int main() {
    fastio

    cin >> n;
    nums.resize(n);
    FOR(i, 0, n) { cin >> nums[i]; }

    int max_profit = 0;
    FOR(i, 0, n-1) {
        FOR(j, i+1, n) {
            max_profit = max(max_profit, nums[j] - nums[i]);
        }
    }

    cout << max_profit;

    return 0;
}