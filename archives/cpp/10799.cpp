#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

stack<char> s;

int main() { fastio

    string S; cin >> S;
    int S_size = S.size();
    int ans = 0;
    FOR(i, 0, S_size) {
        char ch = S[i];
        if (ch == '(') {
            s.push(ch);
        } else {
            s.pop();
            if (S[i-1] == '(') {
                ans += s.size();
            } else {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
} 