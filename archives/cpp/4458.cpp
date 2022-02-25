#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();
    while (N--) {
        string words; getline(cin, words);
        char ch = toupper(words[0]);
        words[0] = ch;
        cout << words << endl;;
    }

    return 0;
}