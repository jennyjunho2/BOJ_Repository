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

    int a, b, c; cin >> a >> b >> c;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    int A = nums[0], B = nums[1], C = nums[2];

    string seq; cin >> seq;
    for (char ch: seq) {
        if (ch == 'A') {
            cout << A << ' ';
        } else if (ch == 'B') {
            cout << B << ' ';
        } else {
            cout << C << ' ';
        }
    }

    return 0;
}