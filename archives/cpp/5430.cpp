#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

deque<int> dq;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        dq.clear();
        string p; cin >> p;
        int n; cin >> n;
        string array; cin >> array;
        int array_len = array.size();
        string tmp = "";
        FOR(i, 0, array_len) {
            if (isdigit(array[i])) {
                tmp += array[i];
            } else {
                if (tmp != "") {
                    dq.push_back(stoi(tmp));
                    tmp = "";
                }
            }
        }

        bool err = false;
        bool reverse_flag = false;
        for (char command: p) {
            if (command == 'R') {
                reverse_flag = !reverse_flag;
            } else if (command == 'D') {
                if (dq.empty()) {
                    err = true;
                    break;
                } else {
                    if (reverse_flag) {
                        dq.pop_back();
                    } else {
                        dq.pop_front();
                    }
                }
            }
        }

        if (err) {
            cout << "error" << endl;
        } else {

            if (reverse_flag) {
                reverse(dq.begin(), dq.end());
            }

            int dq_size = dq.size();
            if (dq_size == 0) {
                cout << "[]" << endl;
            } else {
                cout << '[' << dq[0];
                FOR(i, 1, dq_size) {
                    cout << ',' << dq[i];
                }
                cout << ']' << endl;
            }
        }
    }
    
    return 0;
}