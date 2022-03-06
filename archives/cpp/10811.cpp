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

    int N, M; cin >> N >> M;
    vector<int> nums;
    FOR(i, 0, N) {
        nums.push_back(i+1);
    }

    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        reverse(nums.begin()+a-1, nums.begin()+b);
    }

    FOR(i, 0, N) {
        cout << nums[i] << ' ';
    }

    return 0;
}