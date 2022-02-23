#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        int s; cin >> s;
        int n; cin >> n;
        while (n--) {
            int q, p;
            cin >> q >> p;
            s += q * p;
        }

        cout << s << "\n";
    }

    return 0;
}