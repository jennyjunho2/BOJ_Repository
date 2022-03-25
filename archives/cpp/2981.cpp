#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> nums;
set<int> ans;

int gcd(int a, int b)  {
    return b == 0 ? a : gcd(b, a%b);
}

int main() { fastio

    cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());

    int acc_gcd = nums[1] - nums[0];
    FOR(i, 2, N) {
        acc_gcd = gcd(nums[i] - nums[i-1], acc_gcd);
    }

    int cnt = 0;
    FOR(i, 1, sqrt(acc_gcd)+1) {
        if (acc_gcd % i == 0) {
            ans.insert(i);
            ans.insert(acc_gcd / i);
        }
    }
    ans.insert(acc_gcd);
    vector<int> result(ans.begin(), ans.end());
    for (auto i: result) {
        if (i != 1) { cout << i << ' ';}
    }

    return 0;
}