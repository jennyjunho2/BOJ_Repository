#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

deque<char> left_s;
deque<char> right_s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    char temp;
    while (T--) {
        string word; cin >> word;
        left_s.clear();
        right_s.clear();
        for (auto i: word) {
            if (i == '<') {
                if (left_s.empty()) {
                    continue;
                }
                temp = left_s.back();
                left_s.pop_back();
                right_s.push_front(temp);
            } else if (i == '>') {
                if (right_s.empty()) {
                    continue;
                }
                temp = right_s.front();
                right_s.pop_front();
                left_s.push_back(temp);
            } else if (i == '-') {
                if (left_s.empty()) {
                    continue;
                }
                left_s.pop_back();
            } else {
                left_s.push_back(i);
            }
        }
        int left_len = left_s.size();
        int right_len = right_s.size();
        FOR(i, 0, left_len) {
            cout << left_s[i];
        }
        FOR(i, 0, right_len) {
            cout << right_s[i];
        }
        cout << endl;
    }

    

    return 0;
}