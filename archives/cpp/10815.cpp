#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<int> nums;

int main() {
    fastio

    int N; cin >> N;
    nums.resize(N);
    FOR(i, 0, N) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    int M; cin >> M;
    FOR(i, 0, M) {
        int temp; cin >> temp;
        if (binary_search(nums.begin(), nums.end(), temp)) {
            cout << 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }

    return 0;
}