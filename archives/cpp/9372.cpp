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
int N, M;
int parent[1001];

int find(int node) {
    if (node == parent[node]) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() {fastio
    
    TC {
        cin >> N >> M;
        FOR(i, 1, N+1) { parent[i] = i; }
        queue<p> q;
        FOR(i, 0, M) {
            int a, b; cin >> a >> b;
            q.push({a, b});
        }
        
        int cnt = 0;
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (find(x) != find(y)) {
                merge(x, y);
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
