#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int arr[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums;
    map<int, int> table;
    FOR(i, 0, N){
        cin >> arr[i];
        nums.push_back(arr[i]);
    }

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    FOR(i, 0, N){
        int idx = lower_bound(nums.begin(), nums.end(), arr[i]) - nums.begin();
        cout << idx << ' ';
    }

    return 0;
}