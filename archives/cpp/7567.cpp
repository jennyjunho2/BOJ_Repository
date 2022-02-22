#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string words;
    cin >> words;
    int height = 10;

    int words_len = words.length();
    for (int i = 0; i < words_len - 1; i++){
        if ((words[i] == ')' && words[i+1] == '(') || (words[i] == '(' && words[i+1] == ')')){
            height += 10;
        } else {
            height += 5;
        }
    }

    cout << height;

    

    return 0;
}