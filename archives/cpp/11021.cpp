#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    int A, B;
    int cnt = 1;
    while (T--) {
        cin >> A >> B;
        cout << "Case #" << cnt << ": " << A+B << "\n";
        cnt++;
    }
    
    return 0;
}