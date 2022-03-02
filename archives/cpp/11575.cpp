#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        string word; cin >> word;

        for (char ch: word) {
            cout << char('A' + ((a * (ch - 'A') + b) % 26));
        }
        cout << endl;
    }

    return 0;
}