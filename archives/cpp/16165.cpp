#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
map<string, vector<string>> table;

int main() {
    fastio
    
    cin >> N >> M;
    FOR(i, 0, N) {
        string group_name, member; int member_cnt;
        cin >> group_name;
        cin >> member_cnt;
        while (member_cnt--) {
            cin >> member;
            table[group_name].push_back(member);
            table[member].push_back(group_name);
        }
    }

    for (auto it = table.begin(); it != table.end(); it++) {
        sort((*it).second.begin(), (*it).second.end());
    }

    FOR(i, 0, M) {
        string member, kind; cin >> member; cin >> kind;
        vector<string> tmp = table[member];
        if (kind == "0") {
            int tmp_size= tmp.size();
            FOR(i, 0, tmp_size) {
                cout << tmp[i] << endl;
            }
        } else {
            cout << tmp[0] << endl;
        }
    }

    return 0;
} 