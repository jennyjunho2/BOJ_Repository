#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> nums;

int main() {
    fastio

    int N; cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());
    FOR(i, 0, N) { cout << nums[i] << endl; }
    
    return 0;
}