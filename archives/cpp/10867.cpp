#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

set<int> nums;
vector<int> nums_vec;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        int temp; cin >> temp;
        nums.insert(temp);
    }

    nums_vec.assign(nums.begin(), nums.end());
    sort(nums_vec.begin(), nums_vec.end());

    for (const int& i: nums_vec) {
        cout << i << ' ';
    }

    return 0;
}