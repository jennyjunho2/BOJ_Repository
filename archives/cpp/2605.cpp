#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums;
    int N; cin >> N;
    FOR(i, 1, N+1) {
        int pos; cin >> pos;
        nums.insert(nums.begin()+pos, i);
    }

    reverse(nums.begin(), nums.end());
    FOR(i, 0, N) {
        cout << nums[i] << ' ';
    }

    return 0;
}