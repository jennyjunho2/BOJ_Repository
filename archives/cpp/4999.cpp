#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word1, word2; cin >> word1; cin >> word2;
    if (word1.length() >= word2.length()) {
        cout << "go";
    } else {
        cout << "no";
    }

    return 0;
}