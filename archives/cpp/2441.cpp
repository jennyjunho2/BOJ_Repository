#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    for (int i = N; i >= 1; i--) {
        for (int j = 0; j < N-i; j++) {
            cout << ' ';
        }
        for (int k = 0;k < i; k++) {
            cout << '*';
        }
        cout << "\n";
    }

    return 0;
}