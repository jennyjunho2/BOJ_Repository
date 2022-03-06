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

    cout << fixed;
    cout.precision(2);
    while (true) {
        int H, P; cin >> H >> P;
        if (cin.eof()) { break; }

        cout << (double)H / P << endl;
    }
    
    return 0;
}