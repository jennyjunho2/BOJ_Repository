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

    int cnt = 0;
    TC {
        string word; cin >> word;
        int word_size = word.size();
        stack<char> s;
        s.push(word[0]);
        bool can_do = true;
        FOR(i, 1, word_size) {
            char ch = word[i];
            if(s.empty()) {
                s.push(ch);
            } else {
                if (s.top() != ch) {
                    s.push(ch);
                } else {
                   s.pop();
                }
            }
        }
        
        if (s.empty()) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}