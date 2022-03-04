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

    while (true) {
        int A, B; cin >> A >> B;
        if (A == 0 && B == 0) { return 0; }
        cout << A / B << ' ' << A % B << " / " << B << endl;
    }

    return 0;
}