#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

map<string, int> table1;
map<int, string> table2;

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 1, N+1) {
        string word; cin >> word;
        table1[word] = i;
        table2[i] = word;
    }

    FOR(_, 0, M) {
        string what; cin >> what;
        if (what[0] >= '0' && what[0] <= '9') {
            cout << table2[stoi(what)] << endl;
        } else {
            cout << table1[what] << endl;
        }
    }
    return 0;
}