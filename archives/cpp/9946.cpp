#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<char, int> init_table;
map<char, int> next_table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string init; string next;
    int cnt = 1;
    while (true) {
        cin >> init; cin >> next;
        init_table.clear();
        next_table.clear();
        if (init == "END") { break; }

        for (char ch: init) {
            init_table[ch]++;
        }
        for (char ch2: next) {
            next_table[ch2]++;
        }

        cout << "Case " << cnt << ": ";
        if (init_table == next_table) {
            cout << "same" << endl;
        } else {
            cout << "different" << endl;
        }
        cnt++;
    }

    return 0;
}