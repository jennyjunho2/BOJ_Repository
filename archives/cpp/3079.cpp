#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
ll N, M;
vector<ll> T;

int main() { fastio

    cin >> N >> M; T.resize(N);
    FOR(i, 0, N){
        cin >> T[i];
    }

    ll left = 0, right = M*(*max_element(ALL(T)));
    ll ans = 0;
    while (left <= right) {
        ll mid = (left + right) / 2;

        ll cnt = 0;
        for (ll i: T) {
            cnt += (mid / i);
        }

        if (cnt < M) {
            left = mid + 1;
        } else {
            ans = mid;
            right = mid - 1;
        }
    }

    cout << ans;

    return 0;
}