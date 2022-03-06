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

    int N; cin >> N;
    FOR(i, 1, N+1) {
        cout << "String #" << i << endl;
        string word; cin >> word;
        for (char ch: word) {
            if (ch == 'Z') {
                cout << 'A';
            } else {
                cout << char(ch+1);
            }
        }
        cout << endl << endl;
    }

    return 0;
}