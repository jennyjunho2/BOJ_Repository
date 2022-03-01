#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int w[21][21][21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    FOR(a, 0, 21) {
        FOR(b, 0, 21) {
            FOR(c, 0, 21) {
                if (a == 0 || b == 0 || c == 0) {
                    w[a][b][c] = 1;
                } else if (a < b && b < c) {
                    w[a][b][c] = w[a][b][c-1] + w[a][b-1][c-1] - w[a][b-1][c];
                } else {
                    w[a][b][c] = w[a-1][b][c] + w[a-1][b-1][c] + w[a-1][b][c-1] - w[a-1][b-1][c-1];
                }
            }
        }
    }

    while (true) {
        int a, b, c; cin >> a >> b >> c;
        int ret;
        if (a == -1 && b == -1 && c == -1) { return 0; }
        if (a <= 0 || b <= 0 || c <= 0){
            ret = w[0][0][0];
        } else if (a > 20 || b > 20 || c > 20) {
            ret = w[20][20][20];
        } else {
            ret = w[a][b][c];
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = " << ret << endl;

    }

    return 0;
}