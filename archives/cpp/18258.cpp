#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
queue<int> q;

int main() {
    fastio
    
    cin >> N; string word; int temp;
    while (N--) {
        cin >> word;
        if (word == "push") {
            cin >> temp;
            q.push(temp);
        } else if (word == "pop") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                temp  = q.front();
                q.pop();
                cout << temp << endl;
            }
        } else if (word == "size") {
            cout << q.size() << endl;
        } else if (word == "empty") {
            cout << (q.empty() + 0) << endl;
        } else if (word == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                int temp = q.front();
                cout << temp << endl;
            }
        } else if (word == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                int temp = q.back();
                cout << temp << endl;
            }
        }
    }

    return 0;
} 