#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        string word; cin >> word;
        if (next_permutation(word.begin(), word.end())) {
            cout << word << endl;
        } else {
            cout << "BIGGEST" << endl;
        }
    }

    return 0;
}