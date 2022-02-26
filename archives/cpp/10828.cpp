#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    stack<int> s;
    int N; cin >> N;
    while (N--) {
        string comm; cin >> comm;
        if (comm == "push") {
            int temp; cin >> temp;
            s.push(temp);
        } else if (comm == "pop") {
            if (s.empty()){
                cout << -1 << endl;
            } else {
                int temp = s.top();
                s.pop();
                cout << temp << endl;
            }
        } else if (comm == "size") {
            cout << s.size() << endl;
        } else if (comm  == "empty") {
            if (s.empty()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else if (comm == "top") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
            }
        }
    }

    return 0;
}