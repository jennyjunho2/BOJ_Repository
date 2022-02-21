#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    int table[26] = {0, };

    cin >> word;
    int word_length = word.length();
    int idx = 0;
    
    for (int i = 0; i < word_length; i++) {
        idx = word[i];
        // if uppercase
        if (idx < 97) { idx -= 65;}
        // not uppercase
        else { idx -= 97;}

        table[idx]++;
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