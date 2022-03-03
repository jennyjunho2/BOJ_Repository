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

    FOR(i, 0, 3) {
        string word; cin >> word;
        int word_len = word.length();
        char temp = word[0];
        int streak = 1;
        int max_streak = 1;
        for (char ch :word.substr(1)) {
            if (ch == temp) {
                streak += 1;
            } else {
                temp = ch;
                max_streak = max(max_streak, streak);
                streak = 1;
            }
        }

        cout << max(max_streak, streak) << endl;
    }

    return 0;
}