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
priority_queue<int> pq;

int main() { fastio

    cin >> N;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        pq.push(-temp);
    }

    int ans = 0;
    while (!(pq.size() == 1)) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += (x+y);
        pq.push(x+y);
    }

    cout << -ans;

    return 0;
}