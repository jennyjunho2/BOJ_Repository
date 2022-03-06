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

    int A, B, C, D, P; cin >> A; cin >> B; cin >> C; cin >> D; cin >> P;
    int X = A*P;
    int Y = (P <= C ? B : B + D*(P-C));
    cout << min(X, Y);

    return 0;
}