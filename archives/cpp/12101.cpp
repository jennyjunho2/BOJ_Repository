#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n, k;
int sum;
vector<int> nums;
int cnt = 0;

void backtrack(int depth) {
    if (depth > 11) { return; }

    if (sum == n) {
        cnt++;
        if (cnt == k) {
            int nums_size = nums.size();
            FOR(i, 0, nums_size-1) {
                cout << nums[i] << '+';
            } cout << nums[nums_size-1];
            exit(0);
        }
        return;
    }

    FOR(i, 1, 4) {
        nums.push_back(i);
        sum += i;
        backtrack(depth + 1);
        nums.pop_back();
        sum -= i;
    }
}

int main() {
    fastio

    cin >> n >> k;
    backtrack(0);
    cout << -1;

    return 0;
}