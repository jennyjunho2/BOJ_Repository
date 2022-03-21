#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF 987654321
using p = pair<int, int>;
int N, M, W;
vector<p> graph[501];
ll dist[501];


int main() { fastio

    int TC; cin >> TC;
    while (TC--) {
        cin >> N >> M >> W;
        FOR(i, 1, N+1) { graph[i].clear(); }
        fill(dist, dist+501, INF);

        FOR(i, 0, M) {
            int S, E, T; cin >> S >> E >> T;
            graph[S].push_back({E, T});
            graph[E].push_back({S, T});
        }

        FOR(i, 0, W) {
            int S, E, T; cin >> S >> E >> T;
            graph[S].push_back({E, -T});
        }

        dist[1] = 0;
        bool is_minus_cycle = false;
        FOR(k, 0, N) {
            FOR(i, 1, N+1) {
                for (auto j: graph[i]) {
                    int next_node = j.first;
                    int cost = j.second;
                    if (dist[next_node] > cost + dist[i]) {
                        dist[next_node] = cost + dist[i];

                        if (k == N-1) {
                            is_minus_cycle = true;
                        }
                    }
                }
            }
        }

        cout << (is_minus_cycle ? "YES" : "NO") << endl;
    }

    return 0;
} 