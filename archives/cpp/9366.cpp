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

    int T; cin >> T;
    FOR(i, 1, T+1) {
        int a, b, c; cin >> a >> b >> c;
        cout << "Case #" << i << ": ";
        if (a >= b+c || b >= a+c || c >= a+b) {
            cout << "invalid!" << endl;
        } else if (a == b && b == c && c == a) {
            cout << "equilateral" << endl;
        } else if (a == b || b == c || c == a) {
            cout << "isosceles" << endl;
        } else {
            cout << "scalene" << endl;
        }
    }

    return 0;
}