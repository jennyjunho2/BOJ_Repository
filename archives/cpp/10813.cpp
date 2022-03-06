#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    FOR(i, 1, N+1) {
        nums.push_back(i);
    }
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        swap(nums[a-1], nums[b-1]);
    }

    FOR(i, 0, N) {
        cout << nums[i] << ' ';
    }

    return 0;
}