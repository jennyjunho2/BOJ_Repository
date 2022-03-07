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

    while (true) {
        string word; int N; cin >> word >> N;
        if (cin.eof()) { break; }
        vector<char> words;
        for (char ch: word) {
            words.push_back(ch);
        }

        sort(words.begin(), words.end());
        int cnt = 1;
        bool no_permutation = true;
        cout << word << ' ' << N << " = ";
        do {
            if (cnt == N) {
                no_permutation = false;
                FOR(i, 0, words.size()) {
                    cout << words[i];
                }
                cout << endl;
                break;
            }
            cnt++;
        } while (next_permutation(words.begin(), words.end()));

        if (no_permutation) {
            cout << "No permutation" << endl;
        }
    }
    
    return 0;
}