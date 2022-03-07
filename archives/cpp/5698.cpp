#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        string sentence; getline(cin, sentence);
        if (sentence == "*") { break; }

        char tauto = sentence[0];
        int sentence_len = sentence.length();
        bool is_tautogram = true;
        FOR(i, 0, sentence_len) {
            if (sentence[i] == ' ') {
                char ch = sentence[i+1];
                char ch2;
                if (ch >= 'a' && ch <= 'z') {
                    ch2 = ch-'a'+'A';
                } else if (ch >= 'A' && ch <= 'Z') {
                    ch2 = ch-'A'+'a';
                }

                if (ch != tauto && ch2 != tauto) {
                    is_tautogram = false;
                    break;
                }
            }
        }

        if (is_tautogram) {
            cout << 'Y' << endl;
        } else {
            cout << 'N' << endl;
        }
    }

    return 0;
}