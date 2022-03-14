#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

using p = pair<ll, ll>;
vector<ll> nums;
stack<p> s;

int main() {
    fastio

    int N; cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    ll cnt = 0;
    FOR(i, 0, N) {
        int same_height_cnt = 1;
        while (!s.empty() && s.top().first <= nums[i]) {
            cnt += s.top().second;
            if (s.top().first == nums[i]) {
                same_height_cnt = s.top().second+1;
            } else {
                same_height_cnt = 1;
            }
            s.pop();
        }

        if (!s.empty()) { cnt++;}
        s.push({nums[i], same_height_cnt});
    }

    cout << cnt;

    return 0;
}