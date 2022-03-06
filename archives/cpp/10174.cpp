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

    int N; cin >> N;
    cin.ignore();
    while(N--) {
        string sentence; getline(cin, sentence);
        int sentence_len = sentence.length();
        FOR(i, 0, sentence_len) {
            if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
                sentence[i] = char(sentence[i] - 'A' + 'a');
            }
        }
        bool is_palindrome = true;
        FOR(i, 0, (sentence_len+1)/2) {
            if (sentence[i] != sentence[sentence_len-1-i]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
       
    return 0;
}