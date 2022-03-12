#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

map<string, int> table;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        table.clear();
        int n; cin >> n;
        while (n--) {
            string name, kind; cin >> name >> kind;
            table[kind]++;
        }
        int sum = 1;
        for (auto it = table.begin(); it != table.end(); it++) {
            sum *= (it->second + 1);
        }
        cout << sum - 1 << endl;
    }
    
    return 0;
}