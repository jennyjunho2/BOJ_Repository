#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    if (N == 1){
        int temp;
        cin >> temp;
        cout << temp * temp;
        return 0;
    }

    vector<int> nums(N);
    FOR(i, 0, N) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    cout << nums[0] * nums[N-1];

    return 0;
}