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
    cin.ignore();
    while (N--) {
        string sentence; getline(cin, sentence);
        int g_cnt = 0, b_cnt = 0;
        for (char ch: sentence) {
            if (ch == 'g' || ch == 'G') {
                g_cnt++;
            } else if (ch == 'b' || ch == 'B') {
                b_cnt++;
            }
        }

        cout << sentence << " is ";
        if (g_cnt < b_cnt) {
            cout << "A BADDY" << endl;
        } else if (g_cnt == b_cnt) {
            cout << "NEUTRAL" << endl;
        } else {
            cout << "GOOD" << endl;
        }
    }

    return 0;
}