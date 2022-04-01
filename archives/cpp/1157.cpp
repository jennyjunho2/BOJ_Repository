#include <bits/stdc++.h>
using namespace std;

int table[26] = {0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word; cin >> word;
    int idx = 0;
    
    for (char ch: word) {
        if (ch >= 'a') {
            table[ch-'a']++;
        } else {
            table[ch-'A']++;
        }
    }
    
    int result = -1;
    bool same = false;

    for (int i = 0; i < 26; i++){
        if (result < table[i]) {
            result = table[i];
            idx = i;
            same = false;
        } else if (result == table[i]) {
            same = true;
        }
    }

    if (same) {
        cout << "?";
    } else {
        cout << char(idx + 65);
    }

    return 0;
}