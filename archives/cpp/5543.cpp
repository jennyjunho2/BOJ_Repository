#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums(3);
    FOR(i, 0, 3){
        cin >> nums[i];
    }
    int A, B;
    cin >> A;
    cin >> B;

    cout << *min_element(nums.begin(), nums.end()) + min(A, B) - 50;

    return 0;
}