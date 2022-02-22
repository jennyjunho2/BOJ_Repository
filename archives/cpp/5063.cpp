#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int r, e, c;
    while (N--) {
        cin >> r >> e >> c;
        int result = r + c - e;
        if (result < 0) {
            cout << "advertise\n";
        } else if (result == 0) {
            cout << "does not matter\n";
        } else {
            cout << "do not advertise\n";
        }
    }

    return 0;
}