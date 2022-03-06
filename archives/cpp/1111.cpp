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

    int N; cin >> N;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    if (N == 1) { cout << 'A';}
    else if (N== 2) {
        if (nums[0] == nums[1]) {
            cout << nums[0];
        } else {
            cout << 'A';
        }
    } else {
        int a, b;
        if (nums[0] == nums[1]) {
            a = 0;
        } else {
            a = (nums[1] - nums[2]) / (nums[0] - nums[1]);
        }
        
        b = nums[1] - a*nums[0];
        FOR(i, 0, N-1) {
            if (nums[i+1] != a*nums[i] + b) {
                cout << 'B';
                return 0;
            }
        }

        cout << nums[nums.size()-1] * a + b;
    }

    return 0;
}