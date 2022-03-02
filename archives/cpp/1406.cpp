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

    string word; cin >> word;
    for (auto i: word) {
        left_s.push_back(i);
    }

    int M; cin >> M;
    char temp;
    FOR(i, 0, M){
        char comm; cin >> comm;
        if (comm == 'P') {
            cin >> temp;
            left_s.push_back(temp);
        } else if (comm == 'L') {
            if (left_s.empty()) {
                continue;
            }
            temp = left_s.back();
            left_s.pop_back();
            right_s.push_front(temp);
        } else if (comm == 'D') {
            if (right_s.empty()) {
                continue;
            }
            temp = right_s.front();
            right_s.pop_front();
            left_s.push_back(temp);
        } else if (comm == 'B') {
            if (left_s.empty()) {
                continue;
            }

            left_s.pop_back();
        }
    }

    int left_size = left_s.size();
    int right_size = right_s.size();
    FOR(i, 0, left_size){
        cout << left_s[i];
    }
    FOR(i, 0, right_size) {
        cout << right_s[i];
    }

    return 0;
}