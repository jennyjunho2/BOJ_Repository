#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 1;
    while (true) {
        int n0; cin >> n0;
        if (n0 == 0) { return 0; }

        int n1 = 3*n0;
        int n2 = (n1+1) / 2;
        n2 *= 3;
        n2 /= 9;
        if (n1 % 2 == 0) {
            cout << cnt << ". even " << n2 << endl;
        } else {
            cout << cnt << ". odd " << n2 << endl;
        }
        cnt++;
    }

    return 0;
}