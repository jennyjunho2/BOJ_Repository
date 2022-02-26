#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums;
    FOR(i, 0, N){
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    FOR(i, 0, N){
        cout << nums[i] << endl;
    }

    return 0;
}