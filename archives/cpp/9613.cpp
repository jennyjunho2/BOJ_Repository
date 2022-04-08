#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

vector<int> nums;

int main() { fastio

    TC {
        nums.clear();
        int n; cin >> n;
        nums.resize(n);
        FOR(i, 0, n) { cin >> nums[i]; }

        ll sum = 0;
        FOR(i, 0, n) {
            FOR(j, i+1, n) {
                sum += gcd(nums[i], nums[j]);
            }
        }

        cout << sum << endl;
    }

    return 0;
}