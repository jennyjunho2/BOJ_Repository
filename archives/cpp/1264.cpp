#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    while (true) {
        string sentence; getline(cin, sentence);
        if (sentence == "#") { break; }

        int cnt = 0;
        for (char ch: sentence) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = char(ch - 'A' + 'a');
            }
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}