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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int one_win = 0, two_win = 0;
        char one, two;
        while (n--) {
            cin >> one >> two;
            if (one == 'R') {
                if (two == 'P') {
                    two_win++;
                } else if (two == 'S') {
                    one_win++;
                }
            } else if (one == 'P') {
                if (two == 'R') {
                    one_win++;
                } else if (two == 'S') {
                    two_win++;
                }
            } else if (one == 'S') {
                if (two == 'R') {
                    two_win++;
                } else if (two == 'P') {
                    one_win++;
                }
            }
        }

        if (one_win > two_win) {
            cout << "Player 1" << endl;
        } else if (one_win < two_win) {
            cout << "Player 2" << endl;
        } else {
            cout << "TIE" << endl;
        }
    }

    return 0;
}