#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//--------------------------------------------------

vector<int> nums;

int main() {

	int N; cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    cout << *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());

    return 0;
}