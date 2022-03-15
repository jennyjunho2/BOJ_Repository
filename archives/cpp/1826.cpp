#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

using p = pair<int, int>;
p nums[10001];
// max heap
priority_queue<int> pq;

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        int a, b; cin >> nums[i].first >> nums[i].second;
    }
    int L, P; cin >> L >> P;

    sort(nums, nums + N);
    int idx = 0;
    int cnt = 0;
    bool can_we_go = true;
    while (P < L) {
        while (idx < N && nums[idx].first <= P) {
            pq.push(nums[idx].second);
            idx++;
        }

        if (pq.empty()) {
            can_we_go = false;
            break;
        }

        P += pq.top();
        pq.pop();
        cnt++;
    }

    cout << (can_we_go ? cnt : -1);

    return 0;
}