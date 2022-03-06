#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int P; cin >> P;
    while (P--) {
        table = {
            {"TTT", 0}, {"TTH", 0}, {"THT", 0}, {"THH", 0},
            {"HTT", 0}, {"HTH", 0}, {"HHT", 0}, {"HHH", 0}
        };
        string word; cin >> word;
        FOR(i, 0, 38) {
            string sub_word = word.substr(i, 3);
            table[sub_word]++;
        }

        for (auto it = table.rbegin(); it != table.rend(); it++) {
            cout << it->second << ' ';
        }
        cout << endl;
    }

    return 0;
}