#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<char, int> table_a;
    map<char, int> table_b;
    
    int T; cin >> T;
    while (T--) {
        table_a.clear();
        table_b.clear();
        string a, b; cin >> a >> b;
        for (char i: a) {
            table_a[i]++;
        }
        for (char j: b) {
            table_b[j]++;
        }
        if (table_a == table_b) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}