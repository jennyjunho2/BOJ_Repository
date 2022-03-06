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
    string temp = "";
    vector<string> words;
    int sentence_len = sentence.length();
    FOR(i, 0, sentence_len) {
        if (sentence[i] == ' ') {
            words.push_back(temp);
            temp = "";
        } else {
            temp += sentence[i];
        }
    }

    words.push_back(temp);
    cout << char(words[0][0] - 'a' + 'A');
    int words_size = words.size();
    FOR(i, 1, words_size){
        if (words[i] != "i" && words[i] != "pa" && words[i] != "te" && words[i] != "ni" && words[i] != "niti" && words[i] != "a" && words[i] != "ali" && words[i] != "nego" && words[i] != "no" && words[i] != "ili")
			cout << char(words[i][0] - 'a' + 'A');
    }

    return 0;
}