#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums;
    while (N--) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int cnt = 0;
    int v; cin >> v;
    FOR(i, 0, nums.size()) {
        if (nums[i] == v) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}