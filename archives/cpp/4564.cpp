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

    while (true) {
        int S; cin >> S;
        nums.clear();
        if (S == 0) { return 0; }
        nums.push_back(S);
        while (S >= 10) {
            int new_S = 1;
            for (char ch: to_string(S)) {
                new_S *= (ch - '0');
            }
            nums.push_back(new_S);
            S = new_S;
        }

        int nums_size = nums.size();
        FOR(i, 0, nums_size) {
            cout << nums[i] << ' ';
        }
        cout << endl;
    }

    

    return 0;
}