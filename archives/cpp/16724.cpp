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
int N, M;
int parent[1000001];
char graph[1000001];

int find(int node) {
    return node == parent[node] ? node : parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() { fastio

    iota(parent, parent+1000001, 0);
    cin >> N >> M;
    FOR(i, 0, N*M) {
        cin >> graph[i];
    }

    FOR(i, 0, N*M) {
        char ch = graph[i];
        int next;
        switch (ch) {
            case 'D':
                next = i + M;
                break;
            case 'R':
                next = i + 1;
                break;
            case 'U':
                next = i - M;
                break;
            case 'L':
                next = i - 1;
                break;
        }

        if (find(i) != find(next)) {
            merge(i, next);
        }
    }

    set<int> table;
    FOR(i, 0, N*M) {
        table.insert(find(i));
    }

    cout << table.size();

    return 0;
}