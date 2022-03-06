#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int N, P; cin >> N;
        if (N == 0) { return 0; } cin >> P;
        if (P%2 == 0) {
            if (N/2 >= P) {
                cout << P-1 << ' ' << N-P+1 << ' ' << N-P+2 << endl;
            } else {
                cout << N-P+1 << ' ' << N-P+2 << ' ' << P-1 << endl;
            }
        } else {
            if (N/2 >= P) {
                cout << P+1 << ' ' << N-P << ' ' << N-P+1 << endl;
            } else {
                cout << N-P << ' ' << N-P+1 << ' ' << P+1 << endl;
            }
        }
    }

    return 0;
}