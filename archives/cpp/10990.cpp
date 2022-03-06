#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 1, N+1) {
        if (i == 1) {
            FOR(j, 0, N-1) {
                cout << ' ';
            }
            cout << '*' << endl;
        } else {
            FOR(j, 0, N-i) {
                cout << ' ';
            }
            cout << '*';
            FOR(k, 0, 2*i-3) {
                cout << ' ';
            }
            cout << '*' << endl;
        } 
    }

    return 0;
}