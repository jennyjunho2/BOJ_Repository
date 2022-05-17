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

int main() { fastio
    
    int T; cin >> T;
    cin.ignore();
    while(T--) {
        string sentence; getline(cin, sentence);
        map<char, int> table;

        for (char ch: sentence) {
            if (ch != ' ') {
                table[ch]++;
            }
        }

        auto maax = max_element(table.begin(), table.end(), [](
            const pair<char, int>& a, const pair<char, int>& b
        ) { return a.second < b.second; });

        int maax_cnt = 0;
        for (auto it = table.begin(); it != table.end(); it++) {
            if (it->second == maax->second) {
                maax_cnt++;
            }
        }

        if (maax_cnt == 1) {
            cout << maax->first << endl;
        } else {
            cout << '?' << endl;
        }
    }

    return 0;
}