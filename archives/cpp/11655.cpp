#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string words; getline(cin, words);
    string ans;
    for (auto word: words) {
        if (isalpha(word)) {
            if (tolower(word) - 'a' < 13) {
                ans += word + 13;
            } else {
                ans += word - 13;
            }
        } else {
            ans += word;
        }
    }

    cout << ans;

    return 0;
}