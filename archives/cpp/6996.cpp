#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        string a, b; cin >> a >> b;
        cout << a << " & " << b << " are ";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << "anagrams." << endl;
        } else {
            cout << "NOT anagrams." << endl;
        }
    }

    return 0;
}