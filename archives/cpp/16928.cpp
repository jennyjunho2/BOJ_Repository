#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
int dist[101];
int next_pos[101];
queue<int> q;

int main() {
    fastio

    cin >> N >> M;
    memset(dist, -1, sizeof(dist));
    FOR(i, 1, 101) {next_pos[i] = i; }
    FOR(i, 0, M+N) {
        int u, v; cin >> u >> v;
        next_pos[u] = v;
    }

    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        int pos = q.front();
        q.pop();

        FOR(i, 1, 7) {
            int npos = pos + i;
            if (npos > 100) { continue; }

            npos = next_pos[npos];
            if (dist[npos] == -1) {
                dist[npos] = dist[pos] + 1;
                q.push(npos);
            }
        }
    }

    cout << dist[100];
    
    return 0;
}