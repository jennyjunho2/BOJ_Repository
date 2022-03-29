#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {fastio

    string word; cin >> word;
    int word_len = word.size();

    string ans = "";
    FOR(i, 1, word_len-1) {
        FOR(j, 1, word_len-i) {
            string sub1 = word.substr(0, i);
            string sub2 = word.substr(i, j);
            string sub3 = word.substr(i+j);

            reverse(sub1.begin(), sub1.end());
            reverse(sub2.begin(), sub2.end());
            reverse(sub3.begin(), sub3.end());

            string temp = sub1 + sub2 + sub3;
            if (ans == "") { ans = temp; }
            else { ans = min(ans, temp); }
        }
    }

    cout << ans;
    
    return 0;
}