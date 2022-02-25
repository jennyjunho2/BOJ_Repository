#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;

    FOR(i, 0, 9) {
        int temp; cin >> temp;
        nums.push_back(temp);
        sum += temp;
    }

    FOR(i, 0, 9) {
        FOR(j, i+1, 9) {
            if (sum - (nums[i] + nums[j]) == 100) {
                FOR(k, 0, 9){
                    if (k == i || k == j) { continue; }
                    else {
                        cout << nums[k] << endl;
                    }
                }
                
                return 0;
            }
        }
    }

    return 0;
}