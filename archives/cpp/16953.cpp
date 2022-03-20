#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<ll, ll>;
queue<p> q;
ll A, B;

int main() {
    fastio
    
    cin >> A >> B;
    q.push({A, 1});

    while (!q.empty()) {
        ll x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (x == B) {
            cout << cnt;
            return 0;
        }

        if (x*10+1 <= B) { q.push({x*10+1, cnt+1}); }

        if (x*2 <= B) { q.push({x*2 , cnt+1}); }
    }

    cout << -1;

    return 0;
} 