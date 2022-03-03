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

    int T; cin >> T;
    vector<char> check;
    while (T--) {
        int sum = 2015;
        check.clear();
        string word; cin >> word;
        for(char ch: word) {
            if (find(check.begin(), check.end(), ch) == check.end()) {
                check.push_back(ch);
                sum -= ch;
            }
        }

        cout << sum << endl;
    }

    return 0;
}