#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, k;

int main() {
    fastio

    cin >> N >> k;

    int left = 1, right = k;
    int ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;

        int cnt = 0;
        FOR(i, 1, N+1) {
            cnt += min(N, mid/i);
        }

        if (cnt >= k) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

    return 0;
}