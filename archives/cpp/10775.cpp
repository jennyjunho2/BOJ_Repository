#include "bits/stdc++.h"
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int G, P;
int parent[100001];

int find(int node) {
    return parent[node] == node ? node : parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) { parent[a] = b; }
    else { parent[b] = a; }
}

int main() {fastio

    iota(parent, parent+100001, 0);

    cin >> G >> P;
    int cnt = 0;
    FOR(i, 0, P) {
        int temp; cin >> temp;
        int dock_gate = find(temp);
        
        if (dock_gate != 0) {
            merge(dock_gate, dock_gate-1);
            cnt++;
        } else {
            break;
        }
    }

    cout << cnt;

    

    return 0;
}
