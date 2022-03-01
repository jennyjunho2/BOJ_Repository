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
    
    int n; cin >> n;
    FOR(i, 0, n){
        int temp; cin >> temp;
        nums.push_back(temp);
    }
    int x; cin >> x;

    sort(nums.begin(), nums.end());
    int cnt = 0;
    int ptr1 = 0; int ptr2 = n-1;
    while (ptr1 < ptr2) {
        int sum = nums[ptr1] + nums[ptr2];
        if (sum < x) {
            ptr1 += 1;
            continue;
        } else if (sum == x) {
            cnt++;
        }
        ptr2 -= 1;
    }

    cout << cnt;

    return 0;
}