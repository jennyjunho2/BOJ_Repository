#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using ull = unsigned long long;
int main() {
    fastio

    ull n; cin >> n;
    ull left = 0; ull right = sqrt(9223372036854775807)+1;
    if (n == 0) { cout << 0; return 0; }
    ull ans = 1;
    while (left <= right) {
        ull mid = (left + right) / 2;
        if (mid * mid >= n) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

    return 0;
} 