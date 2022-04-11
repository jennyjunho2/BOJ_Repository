#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, K;
int bag[300001];
p jewels[300001];
priority_queue<ll> pq;

int main() { fastio

    cin >> N >> K;
    FOR(i, 0, N) {
        cin >> jewels[i].first >> jewels[i].second;
    }

    FOR(i, 0, K) {
        cin >> bag[i];
    }

    sort(jewels, jewels+N);
    sort(bag, bag+K);

    ll result = 0;
    int ptr = 0;
    
    FOR(i, 0, K) {
        while (ptr < N && jewels[ptr].first <= bag[i]) {
            pq.push(jewels[ptr].second);
            ptr++;
        }

        if (!pq.empty()) {
            result += pq.top();
            pq.pop();
        }
    }

    cout << result;

    return 0;
}