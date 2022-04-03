#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
vector<int> bluray;

bool check(int size) {
    ll temp = 0;
    ll cnt = 0;
    FOR(i, 0, N) {
        temp += bluray[i];
        if (temp > size) {
            cnt++;
            temp = bluray[i];
        }
    }
    cnt++;

    return cnt <= M;
}

int main() {fastio

    cin >> N >> M;
    bluray.resize(N);
    FOR(i, 0, N) { cin >> bluray[i]; }

    ll left = *max_element(bluray.begin(), bluray.end()), right = int(1e18);
    ll ans = int(1e18);
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (check(mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
