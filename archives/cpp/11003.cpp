#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

using p = pair<int, int>;
vector<int> nums;
deque<p> dq;

int main() {
    fastio

    int N, L; cin >> N >> L;
    nums.resize(N+1);
    FOR(i, 1, N+1) { cin >> nums[i]; }
    FOR(i, 1, N+1) {
        if (!dq.empty()) {
            if (dq.front().first < i-L+1) {
                dq.pop_front();
            }
        }

        while (!dq.empty() && dq.back().second > nums[i]) {
            dq.pop_back();
        }
        dq.push_back({i, nums[i]});
        cout << dq.front().second << ' ';
    }


    
    return 0;
}