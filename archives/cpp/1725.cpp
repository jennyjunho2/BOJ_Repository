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
ll h[100002];
ll n; ll ans;
stack<ll> s;

int main() { fastio

    cin >> n;
    FOR(i, 1, n+1) {
        cin >> h[i];
    }

    s.push(0);
    FOR(i, 1, n+2) {
        while(!s.empty() && h[s.top()] > h[i]) {
            ll j = s.top();
            s.pop();
            ans = max(ans, h[j]*(i-s.top()-1));
        }
        s.push(i);
    }

    cout << ans;

    return 0;
}