#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int parent[51];
vector<int> truth;
vector<int> graph[51];

int find(int node) {
    if (node == parent[node]) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    parent[b] = a;
}

int main() { fastio

    cin >> N >> M;
    FOR(i, 1, N+1) { parent[i] = i; }
    int B; cin >> B;
    FOR(i, 0, B) {
        int temp; cin >> temp;
        truth.push_back(temp);
    }

    FOR(i, 0, M) {
        int ppl; cin >> ppl;
        FOR(j, 0, ppl) {
            int temp; cin >> temp;
            graph[i].push_back(temp);
        }
    }

    int cnt = M;
    FOR(i, 0, M) {
        int temp1 = graph[i][0];
        int graph_size = graph[i].size();
        FOR(j, 1, graph_size) {
            int temp2 = graph[i][j];
            merge(temp1, temp2);
        }
    }

    FOR(i, 0, M) {
        bool can_go_party = true;
        for (auto j: graph[i]) {
            if (!can_go_party) { break; }

            for (auto k: truth) {
                if (find(j) == find(k)) {
                    can_go_party = false;
                    break;
                }
            }
        }
        
        if (!can_go_party) { cnt--; }
    }

    cout << cnt;

    return 0;
} 