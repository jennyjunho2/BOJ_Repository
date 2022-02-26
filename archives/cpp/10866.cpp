#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    deque<int> q;
    while (N--) {
        string comm; cin >> comm;
        if (comm == "push_front") {
            int temp; cin >> temp;
            q.push_front(temp);
        } else if (comm == "push_back") {
            int temp; cin >> temp;
            q.push_back(temp);
        } else if (comm == "pop_front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
                q.pop_front(); 
            }
        } else if (comm == "pop_back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.back() << endl;
                q.pop_back();
            }
        } else if (comm == "size") {
            cout << q.size() << endl;
        } else if (comm == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
            }
        } else if (comm == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else  {
                cout << q.back() << endl;
            }
        } else if (comm == "empty") {
            if (q.empty()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}