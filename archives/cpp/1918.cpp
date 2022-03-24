#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

stack<char> s;

int main() { fastio

    string word; cin >> word;
    string ans = "";

    for (char ch: word) {
        if (ch >= 'A' && ch <= 'Z') {
            ans += ch;
            continue;
        }

        if (ch == '(') {
            s.push(ch);
        } else if (ch == '*' || ch == '/') {
            while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                ans += s.top();
                s.pop();
            }
            s.push(ch);
        } else if (ch == '+' || ch == '-') {
            while (!s.empty() && s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
    }

    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }

    cout << ans;

    return 0;
}  