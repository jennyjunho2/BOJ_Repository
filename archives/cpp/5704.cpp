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
        if (sentence == "*") { break; }
        int arr[26] = {0, };
        for (char ch: sentence) {
            if (ch != ' ') {
                arr[ch - 'a'] += 1;
            }
        }

        bool is_pangram = true;
        FOR(i, 0, 26) {
            if (arr[i] < 1) {
                cout << 'N' << endl;
                is_pangram = false;
                break;
            }
        }

        if (is_pangram) {
            cout << 'Y' << endl;
        }
    }

    return 0;
}