#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string words; cin >> words;
    int words_len = words.length();
    FOR(i, 0, words_len / 10 + 1) {
        cout << words.substr(i*10, 10) << endl;
    }

    return 0;
}