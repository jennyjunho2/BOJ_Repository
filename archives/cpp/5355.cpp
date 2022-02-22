#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    float N;
    string words;
    while (T--){
        cin >> N;
        getline(cin, words);
        int word_len = words.length();

        for (int i = 0; i < word_len; i++){
            switch (words[i]) {
            case '@':
                N *= 3;
                break;
            case '%':
                N += 5;
                break;
            case '#':
                N -= 7;
                break;
            default:
                break;
            }
        }
        printf("%.2f\n", N);
    }

    return 0;
}