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
int degree[32001];
vector<int> graph[32001];

int main() {fastio

    cin >> N >> M;
    FOR(i, 0, M) {
        int x, y; cin >> x >> y;
        degree[y]++;
        graph[x].push_back(y);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    FOR(i, 1, N+1) {
        if (degree[i] == 0) {
            pq.push(i);
        }
    }

    while(!pq.empty()) {
        int node = pq.top();
        pq.pop();

        cout << node << ' ';

        for (auto next_node : graph[node]) {
            degree[next_node]--;

            if (degree[next_node] == 0) {
                pq.push(next_node);
            }
        }
    }

    return 0;
}