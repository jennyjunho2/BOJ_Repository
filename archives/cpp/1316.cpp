#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    int cnt = 0;
    while (N--) {
        string word; cin >> word;
        bool err = false;
        int word_len = word.length();
        FOR(i, 0, word_len - 1){
            if (word[i] == word[i+1]){
                continue;
            }
            
            char ch = word[i];
            string sub_word = word.substr(i+1);
            if (sub_word.find(ch) != -1) {
                err = true;
                break;
            }
        }
        if (!err) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}