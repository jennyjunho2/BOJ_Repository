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

    while (true) {
        string sentence; getline(cin, sentence);
        if (cin.eof()) { break; }
        int lower = 0; int upper = 0;
        int numbers = 0; int space = 0;
        for (auto ch: sentence) {
            if (ch >= '0' && ch <= '9') {
                numbers++;
            } else if (ch >= 'a' && ch <= 'z') {
                lower++;
            } else if (ch >= 'A' && ch <= 'Z') {
                upper++;
            } else if (ch == ' ') {
                space++;
            }
        }

        cout << lower << ' ' << upper << ' ' << numbers << ' ' << space;
        cout << endl;
    }
    return 0;
}