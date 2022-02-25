#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> q;

    int N; cin >> N;
    string comm;
    int temp;

    while (N--) {
        cin >> comm;
        if (comm == "push") {
            cin >> temp;
            q.push_back(temp);
        } else if (comm == "pop") {
            if (q.empty()) {cout << -1 << endl;}
            else {
                temp = q[0];
                cout << temp << endl;
                q.pop_front();
            }
        } else if (comm == "size") {
            cout << q.size() << endl;
        } else if (comm == "empty") {
            if (q.empty()) { cout << 1 << endl; }
            else { cout << 0 << endl; }
        } else if (comm == "front") {
            if (q.empty()) { cout << -1 << endl;}
            else { cout << q[0] << endl; }
        } else if (comm == "back") {
            if (q.empty()) { cout << -1 << endl;}
            else { cout << q[q.size() - 1] << endl; }
        }
    }

    return 0;
}