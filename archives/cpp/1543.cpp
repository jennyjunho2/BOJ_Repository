#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() { fastio

    string word, f;
    getline(cin, word); getline(cin, f);
    int word_len = word.size();
    int f_len = f.size();
    int i = 0;

    int cnt = 0;
    while(i != word_len) {
        string temp = word.substr(i, f_len);
        if (temp == f) {
            cnt++;
            i += f_len;
        } else {
            i++;
        }
    }

    cout << cnt;

    return 0;
}