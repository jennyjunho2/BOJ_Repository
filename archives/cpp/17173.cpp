#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    fastio

    int N, M; cin >> N >> M;
    vector<int> nums;
    FOR(i, 0, M) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    int nums_size = nums.size();
    int sum = 0;
    FOR(i, 1, N+1) {
        bool flag = false;
        FOR(j, 0, nums_size) {
            if (i % nums[j] == 0) {
                flag = true;
                break;
            }
        }

        if (flag) { sum += i;}
    }

    cout << sum;

    return 0;
}