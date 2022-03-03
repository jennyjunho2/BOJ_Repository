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
    while (T--) {
        int n, m; cin >> n >> m;
        double num;
        int cnt = 0;
        FOR(b, 2, n) {
            FOR(a, 1, b) {
                num = (double)(a*a + b*b + m) / (a*b);
                if (floor(num) == num) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}