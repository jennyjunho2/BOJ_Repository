#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int gcd(const int& a, const int& b) {
    if (b == 0) { return a; }

    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> nums;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    FOR(i, 1, N) {
        int gcd_num = gcd(nums[0], nums[i]);
        cout << nums[0] / gcd_num << '/' << nums[i] / gcd_num << endl;
    }

    return 0;
}