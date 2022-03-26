#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
ll dist[100000];
ll cost[100000];

int main() { fastio

    int N; cin >> N;
    ll total_cost = 0;
    FOR(i, 1, N) {
        cin >> dist[i];
    }

    FOR(i, 0, N) {
        cin >> cost[i];
    }

    ll cost_temp = cost[0];
    total_cost = cost_temp*dist[1];

    FOR(i, 1, N) {
        cost_temp = min(cost_temp, cost[i]);
        total_cost += cost_temp*dist[i+1];
    }
    
    cout << total_cost;

    return 0;
} 