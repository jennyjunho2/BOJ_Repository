#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<int> max_nums;

int main() {
    fastio

    int N; cin >> N;
    int arr[5];
    FOR(_, 0, N) {
        FOR(a, 0, 5) {
            cin >> arr[a];
        }

        int max_first = 0;
        FOR(i, 2, 5) {
            FOR(j, 0, i-1) {
                FOR(k, j+1, i) {
                    max_first = max(max_first, (arr[i]+arr[j]+arr[k])%10);
                }
            }
        }

        max_nums.push_back(max_first);
    }

    int max_num = 0, max_idx;
    FOR(i, 0, N) {
        if (max_num <= max_nums[i]) {
            max_num = max_nums[i];
            max_idx = i+1;
        } 
    }

    cout << max_idx;

    return 0;
}