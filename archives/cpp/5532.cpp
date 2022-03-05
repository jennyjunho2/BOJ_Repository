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

    int L, A, B, C, D;
    cin >> L; cin >> A; cin >> B; cin >> C; cin >> D;
    cout << L - max(A%C==0 ? A/C : A/C + 1, B%D==0 ? B/D : B/D + 1);

    return 0;
}