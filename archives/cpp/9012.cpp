#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        string words; cin >> words;
        stack<char> s;
        if (words.length() % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        for (auto word: words) {
            if (word == '(') {
                s.push(word);
            } else if (word == ')') {
                if (s.empty()) {
                    s.push(word);
                } else {
                    if (s.top() == '(') {
                        s.pop();
                    } else {
                        s.push(word);
                    }
                }
            }
        }

        if (s.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}