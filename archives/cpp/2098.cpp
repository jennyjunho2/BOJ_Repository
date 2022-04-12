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
#define INF 987654321
int N;
int min_dist;
int graph[16][16];
int cost[16][1<<16];

int dfs(int node, int bit) {
    if (bit == ((1 << N) - 1)) {
         return graph[node][0] ? graph[node][0] : INF;
    }

    if (cost[node][bit] != -1) return cost[node][bit];

    cost[node][bit] = INF;
    FOR(i, 0, N) {
        if ((graph[node][i] == 0) || (bit & (1 << i)) == 1 << i) { continue; }

        cost[node][bit] = min(cost[node][bit], graph[node][i] + dfs(i, bit | (1 << i)));
    }

    return cost[node][bit];
}

int main() { fastio

    cin >> N;
    min_dist = INT_MAX;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }

    memset(cost, -1, sizeof(cost));
    cout << dfs(0, 1);

    return 0;
}