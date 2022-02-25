#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--){
        string word; cin >> word;
        cout << (word[0] - '0') + (word[2] - '0') << endl;
    }

    return 0;
}