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
int N;
int graph[16][16];
bool visited[16];
int start;
int min_dist;

void backtrack(int node, int cost, int depth) {
    if (depth == N-1) {
        if (graph[node][start]) {
            min_dist = min(min_dist, cost + graph[node][start]);
            return;
        }
    }

    FOR(i, 0, N) {
        if (!visited[i] && graph[node][i]) {
            visited[i] = true;
            backtrack(i, cost+graph[node][i], depth+1);
            visited[i] = false;
        }
    }
}

int main() { fastio

    cin >> N;
    min_dist = INT_MAX;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        start = i;
        visited[i] = true;
        backtrack(i, 0, 0);
        visited[i] = false;
    }

    cout << min_dist;

    return 0;
}