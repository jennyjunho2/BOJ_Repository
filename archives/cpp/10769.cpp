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

    string sentence; getline(cin, sentence);
    int sentence_len = sentence.length();
    int happy = 0, sad = 0;

    FOR(i, 0, sentence_len-2) {
        if (sentence[i] == ':' && sentence[i+1] == '-') {
            if (sentence[i+2] == ')') {
                happy++;
            } else if (sentence[i+2] == '(') {
                sad++;
            }
        }
    }

    if (happy == 0 && sad == 0) {
        cout << "none";
    } else if (happy == sad) {
        cout << "unsure";
    } else if (happy > sad) {
        cout << "happy";
    } else {
        cout << "sad";
    }
    
    return 0;
}