#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

deque<int> dq;
int total_cnt = 0;

void rotate_left(int cnt) {
    total_cnt += cnt;
    while (cnt--) {
        int temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }
}

void rotate_right(int cnt) {
    total_cnt += cnt;
    while (cnt--) {
        int temp = dq.back();
        dq.pop_back();
        dq.push_front(temp);
    }
}

int main() {
    fastio

    int n, m; cin >> n >> m;
    FOR(i, 1, n+1) { dq.push_back(i); }
    
    
    while (m--) {
        int find_num; cin >> find_num;
        int find_idx;
        int dq_size = dq.size();
        FOR(i, 0, dq_size) {
            if (dq[i] == find_num) {
                find_idx = i;
                break;
            }
        }

        if (find_idx-0 < dq_size-find_idx) {
            rotate_left(find_idx);
        } else {
            rotate_right(dq_size-find_idx);
        }
        dq.pop_front();
    }

    cout << total_cnt;

    return 0;
}