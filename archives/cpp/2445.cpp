#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, i+1) {
            cout << '*';
        }
        FOR(k, 0, 2*(N - i - 1)) {
            cout << ' ';
        }
        FOR(l, 0, i+1) {
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = N-1; i >= 1; i--){
        FOR(j, 0, i) {
            cout << '*';
        }
        FOR(k, 0, 2*(N-i)) {
            cout << ' ';
        }
        FOR(l, 0, i) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}