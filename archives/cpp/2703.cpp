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
    cin.ignore();
    map<char, char> table;
    while (T--) {
        table.clear();
        string word; getline(cin, word);
        string cipher; getline(cin, cipher);

        char i = 'A';
        for (char ch: cipher) {
            table[i] = ch;
            i++;
        }

        for (char ch: word) {
            if (ch != ' ') {
                cout << table[ch];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}