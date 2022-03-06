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

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        nums.clear();
        int sum = 0, max = 0, max_idx;
        FOR(i, 1, n+1) {
            int temp; cin >> temp;
            nums.push_back(temp);
            sum += temp;

            if (max < temp) {
                max = temp;
                max_idx = i;
            }
        }
        int check = 0;
        FOR(i, 0, n) {
            if (nums[i] == max) {
                check++;
            }
        }

        if (check >= 2) {
            cout << "no winner" << endl;
            continue;
        }

        if (max > sum / 2) {
            cout << "majority winner " << max_idx << endl;
        } else {
            cout << "minority winner " << max_idx << endl;
        }

    }

    return 0;
}