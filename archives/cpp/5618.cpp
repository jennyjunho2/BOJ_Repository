#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int gcd(const int& a, const int& b) {
    if (b == 0) { return a;}

    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int res = 0;
    if (n == 2) {
        int a, b; cin >> a >> b;
        res = gcd(a, b);
    } else if (n == 3) {
        int a, b, c; cin >> a >> b >> c;
        res = gcd(gcd(a, b), c);
    }

    FOR(i, 1, res+1) {
        if (res % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}