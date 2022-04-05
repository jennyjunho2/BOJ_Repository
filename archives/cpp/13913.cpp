#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;
int visited[200001];
queue<int> q;
int parent[200001];

int main() {fastio

    memset(visited, -1, sizeof(visited));
    iota(parent, parent+200001, 0);
    cin >> N >> K;
    visited[N] = 0;
    q.push(N);

    while(!q.empty()) {
        int pos = q.front();
        if (pos == K) { break; }
        q.pop();

        vector<int> temp = {pos+1, pos-1, pos*2};
        FOR(i, 0, 3) {
            int npos = temp[i];
            if (npos >= 0 && npos <= 200000 && visited[npos] == -1) {
                visited[npos] = visited[pos] + 1;
                parent[npos] = pos;
                q.push(npos);
            }
        }
    }

    vector<int> path;
    int node = K;
    while(node != N) {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(N);
    int path_size = path.size();
    cout << visited[K] << endl;
    for (int i = path_size-1; i >= 0; i--) {
        cout << path[i] << ' ';
    }

    return 0;
}
