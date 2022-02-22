#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    int Y = 0, K = 0;
    int y, k;

    while (T--) {
        for (int i = 0; i < 9; i++) {
            cin >> y >> k;
            Y += y; K += k;
        }

        if (Y > K) { cout << "Yonsei\n"; }
        else if (Y < K) { cout << "Korea\n"; }
        else { cout << "Draw\n"; }
    }

    return 0;
}