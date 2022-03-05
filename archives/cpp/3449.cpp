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

    int T; cin >> T;
    while (T--) {
        string first, second; cin >> first; cin >> second;
        int first_len = first.length();
        int cnt = 0;
        FOR(i, 0, first_len) {
            if (first[i] != second[i]) {
                cnt++;
            }
        }

        cout << "Hamming distance is " << cnt << '.' << endl;
    }

    return 0;
}