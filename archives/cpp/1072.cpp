#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
ll X, Y;

int main() { fastio

    cin >> X >> Y;
    ll Z = (Y*100) / X + 1;
    if (Z >= 100) {
        cout << -1; return 0;
    }

    ll left = 1, right = 1000000000;
    ll ans = -1;
    while (left <= right) {
        ll mid = (left+right) / 2;
        ll new_Z = (Y+mid)*100 / (X+mid);

        if (Z <= new_Z) {
            ans = mid;
            right = mid-1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

    return 0;
} 