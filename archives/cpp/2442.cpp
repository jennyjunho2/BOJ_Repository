#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    FOR(i, 1, N + 1) {
        FOR(j, 0, N-i) {
            cout << ' ';
        }
        FOR(k, 0, 2*i - 1) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}