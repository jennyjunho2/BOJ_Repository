#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int gcd(const int& a, const int& b) {
    return b == 0 ? a : gcd(b, a%b);
}

int lcm(const int& a, const int& b) {
    return a*b/gcd(a, b);
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int M, N, x, y; cin >> M >> N >> x >> y;
        if (x == M) { x = 0; }
        if (y == N) { y = 0; }
        int num = x;
        bool flag = false;
        while (num <= lcm(M, N)) {
            if (num%M == x && num%N == y) {
                flag = true;
                break;
            } else {
                num += M;
            }
        }
        if (flag) {
            cout << num << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}