#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    int cnt = 1;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << "Case " << cnt << ": " << a+b << "\n";
        cnt++;
    }

    return 0;
}