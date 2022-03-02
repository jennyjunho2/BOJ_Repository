#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input; cin >> input;
    for (auto i: input) {
        if (i > 'C') {
            cout << char(i - 3);
        } else {
            cout << char(i + 'X' - 'A');
        }
    }

    return 0;
}