#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
priority_queue<ll, vector<ll>, greater<ll>> pq;

int main() {fastio
    
    TC {
        while(!pq.empty()) { pq.pop(); }
        int K; cin >> K;
        FOR(i, 0, K){
            int temp; cin >> temp;
            pq.push(temp);
        }

        ll ans = 0;
        while(pq.size() != 1) {
            ll x = pq.top(); pq.pop();
            ll y = pq.top(); pq.pop();
            ans += (x+y);
            pq.push(x+y);
        }
        cout << ans << endl;
    }

    return 0;
}
