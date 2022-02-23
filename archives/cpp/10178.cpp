#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        int c, v;
        cin >> c >> v;

        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }

    return 0;
}