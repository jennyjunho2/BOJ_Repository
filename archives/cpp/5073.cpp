#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) { break; }

        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        if (c >= a+b) {
            cout << "Invalid" << endl;
        } else if (a == b && b == c && a == c) {
            cout << "Equilateral" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    }

    return 0;
}