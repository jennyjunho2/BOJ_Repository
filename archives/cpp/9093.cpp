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
    while (T--) {
        string sentence; getline(cin, sentence);
        string temp = "";
        int sentence_length = sentence.length();
        FOR(i, 0, sentence_length) {
            if (sentence[i] == ' ' ) {
                reverse(temp.begin(), temp.end());
                cout << temp << ' ';
                temp = "";
            } else {
                temp += sentence[i];
            }
        }
        reverse(temp.begin(), temp.end());
        cout << temp;
        cout << endl;
    }

    return 0;
}