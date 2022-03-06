#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num; cin >> num;
    while (true) {
        char ch; cin >> ch;
        if (ch == '=') {
            cout << num;
            return 0;
        } else {
            int temp; cin >> temp;
            if (ch == '+') {
                num += temp;
            } else if (ch == '-') {
                num -= temp;
            } else if (ch == '*') {
                num *= temp;
            } else if (ch == '/') {
                num /= temp;
            }
        }

    }

    return 0;
}