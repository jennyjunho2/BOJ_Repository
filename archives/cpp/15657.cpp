#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N, M;
int arr[8];
vector<int> nums;

void backtrack(int depth, int min_idx) {
    if (depth == M) {
        FOR(i, 0, M) {
            cout << arr[i]  << ' ';
        }
        cout << endl;
        return;
    }

    FOR(i, min_idx, N) {
        arr[depth] = nums[i];
        backtrack(depth + 1, i);
    }
}

int main() {
    fastio

    cin >> N >> M;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());

    backtrack(0, 0);
    
    return 0;
}