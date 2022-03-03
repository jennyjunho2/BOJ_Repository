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

    int N; cin >> N;
    int A_win = 0, B_win = 0;
    while (N--) {
        int A, B; cin >> A >> B;
        if (A > B) { A_win++; }
        else if (A < B) { B_win++; }
    }

    cout << A_win << ' ' << B_win;

    return 0;
}