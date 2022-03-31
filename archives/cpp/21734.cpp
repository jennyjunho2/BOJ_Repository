#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {fastio
    
    string S; cin >> S;
    for (char ch: S) {
        int ascii = ch;
        int sum = 0;
        for (char ch2: to_string(ascii)) {
            sum += (ch2 - '0');
        }

        FOR(i, 0, sum) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}