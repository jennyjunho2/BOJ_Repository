#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    if (T % 10 != 0) {
        cout << -1;
        return 0;
    }

    int A = T / 300;
    int B = (T - A * 300) / 60;
    int C = (T - A * 300 - 60 * B) / 10;

    cout << A << " " << B << " " << C;

    return 0;
}