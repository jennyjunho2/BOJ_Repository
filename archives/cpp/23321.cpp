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
string s[5];

int main() { fastio

    FOR(i, 0, 5) {
        cin >> s[i];
    }

    int s_size = s[0].size();
    FOR(i, 0, s_size) {
        if (s[0][i] == 'o') {
            FOR(j, 0, 5) {
                s[j][i] = ".omln"[j];
            }
        } else if (s[1][i] == 'o') {
            FOR(j, 0, 5) {
                s[j][i] = "owln."[j];
            }
        }
    }

    FOR(i, 0, 5) {
        cout << s[i] << endl;
    }

    return 0;
}