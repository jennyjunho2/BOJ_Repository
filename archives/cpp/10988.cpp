#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word;
    cin >> word;
    int word_len = word.length();

    for (int i = 0; i < word_len / 2; i++){
        if (word[i] != word[word_len-i-1]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}