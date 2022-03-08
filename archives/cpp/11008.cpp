#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        string s, p; cin >> s >> p;
        size_t pos = s.find(p);
        int p_len = p.length();
        while (pos != string::npos) {
            s.replace(pos, p_len, "1");
            pos = s.find(p);
        }
        cout << s.length() << endl;
    }

    return 0;
}