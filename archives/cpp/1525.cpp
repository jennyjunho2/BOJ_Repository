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
map<string, int> table;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main() { fastio

    string inp = "";
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            char ch; cin >> ch;
            inp += ch;
        }
    }

    queue<string> q;
    table[inp] = 0;
    q.push(inp);
    
    while(!q.empty()) {
        string s = q.front(); q.pop();
        int idx = s.find('0');
        int y = idx / 3; int x = idx % 3;

        if (s == "123456780") { break; }

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= 3 || nx < 0 || nx >= 3) { continue; }

            string nxt_s = s;
            swap(nxt_s[y*3 + x], nxt_s[ny*3 + nx]);

            if (!table.count(nxt_s)) {
                table[nxt_s] = table[s] + 1;
                q.push(nxt_s);
            }
        }
    }

    if (!table.count("123456780")) {
        cout << -1;
    } else {
        cout << table["123456780"];
    }

    return 0;
}