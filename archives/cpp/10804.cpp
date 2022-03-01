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
    
    FOR(i, 1, 21) {
        nums.push_back(i);
    }

    FOR(i, 0, 10) {
        int a, b; cin >> a >> b;
        reverse(nums.begin()+a-1, nums.begin()+b);
    }

    FOR(i, 0, 20){
        cout << nums[i] << ' ';
    }

    return 0;
}