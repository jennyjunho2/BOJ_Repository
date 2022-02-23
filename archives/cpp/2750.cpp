#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums(N);
    FOR(i, 0, N){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    FOR(i, 0, N){
        cout << nums[i] << endl;
    }

    return 0;
}