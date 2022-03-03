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

    vector<char> censor = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
    string input; cin >> input;
    for (char ch: input) {
        if (find(censor.begin(), censor.end(), ch) == censor.end()) {
            cout << ch;
        }
    }

    return 0;
}