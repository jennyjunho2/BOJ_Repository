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

    string word; cin >> word;
    int word_len = word.length();
    vector<string> subwords;
    FOR(i, 0, word_len){
        subwords.push_back(word.substr(i));
    }

    sort(subwords.begin(), subwords.end());
    FOR(i, 0, word_len){
        cout << subwords[i] << endl;
    }

    return 0;
}