#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> nums;
stack<int> s;
vector<int> ans;

int main() {
    fastio

    int N; cin >> N;
    nums.resize(N);
    ans.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    for (int i = N-1; i >= 0; i--) {
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        
        ans[i] = s.empty() ? -1 : s.top();
        s.push(nums[i]);
    }

    FOR(i, 0, N) {
        cout << ans[i] << ' ';
    }

    return 0;
}