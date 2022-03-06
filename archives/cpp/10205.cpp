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

    int K; cin >> K;
    FOR(i, 1, K+1) {
        int h; cin >> h;
        string word; cin >> word;
        for (char ch: word) {
            if (ch == 'c') {
                h += 1;
            } else {
                h -= 1;
            }
        }

        cout << "Data Set " << i << ": " << endl << h << endl << endl;
    }

    return 0;
}