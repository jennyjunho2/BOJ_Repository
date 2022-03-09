#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

stack<char> s;

int main() {
    fastio

    string word; cin >> word;
    for (char ch: word) {
        if (s.empty() || ch == '(') {
            s.push(ch);
        } else {
            if (ch == ')') {
                if (s.top() == '(') {
                    s.pop();
                } else {
                    s.push(ch);
                }
            } 
        }
    }

    cout << s.size();

    return 0;
}