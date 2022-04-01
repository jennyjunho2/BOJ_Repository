#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int F;
map<string, int> table;
int parent[200001];
int friend_cnt[200001];

int find(int node) {
    if (parent[node] == node) { return node; }
    return parent[node] = find(parent[node]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a > b) {
        parent[a] = b;
        friend_cnt[b] += friend_cnt[a];
    } else {
        parent[b] = a;
        friend_cnt[a] += friend_cnt[b];
    }
}

int main() {fastio
    
    TC {
        table.clear();
        fill(friend_cnt, friend_cnt+200001, 1);
        FOR(i, 1, 200001) { parent[i] = i; }

        cin >> F;
        int idx = 1;
        FOR(i, 0, F) {
            string name1, name2;
            cin >> name1 >> name2;

            if (!table.count(name1)) { table[name1] = idx++; }
            if (!table.count(name2)) { table[name2] = idx++; }

            int name1_parent = find(table[name1]);
            int name2_parent = find(table[name2]);

            if (name1_parent != name2_parent) {
                merge(table[name1], table[name2]);
            }

            cout << max(friend_cnt[name1_parent], friend_cnt[name2_parent]) << endl;
        }
    }

    return 0;
}
