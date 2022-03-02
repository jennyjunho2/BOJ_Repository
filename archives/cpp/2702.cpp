#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int gcd(int a, int b) {
    if (b == 0) { return a; }

    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << a * b / gcd(a, b) << ' ' << gcd(a, b) << endl;
    }

    return 0;
}