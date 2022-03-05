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
        string word;
        int sum = 0;
        getline(cin, word);
        string temp = "";
        int word_len = word.length();
        FOR(i, 0, word_len) {
            temp += word[i];
            if (word[i] == ' ' || i == word_len-1) {
                sum += stoi(temp);
                temp = "";
            }
        }

        cout << sum << endl;
    }

    return 0;
}