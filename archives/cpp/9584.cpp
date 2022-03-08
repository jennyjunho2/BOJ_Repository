#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    fastio

    string cmp; cin >> cmp;
    int word_len = cmp.length();
    int k; cin >> k;
    int cnt = 0;
    vector<string> ans;
    while (k--) {
        string word; cin >> word;
        bool flag = true;
        FOR(i, 0, word_len) {
            char ch = cmp[i];
            char ch2 = word[i];
            if ((ch != '*') && (ch != ch2)) {
                flag = false;
                break;
            }
        }
        if (flag) { cnt++; ans.push_back(word);}
    }

    cout << cnt << endl;
    FOR(i, 0, cnt) {
        cout << ans[i] << endl;
    }

    return 0;
}