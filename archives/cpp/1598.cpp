#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int A, B; cin >> A >> B;
    int A_row, B_row, A_col, B_col;
    A_row = A % 4; B_row = B % 4;
    A_col = (A+3) / 4; B_col = (B+3) / 4;
    if (A_row == 0) { A_row = 4; }
    if (B_row == 0) { B_row = 4; }

    cout << abs(A_row - B_row) + abs(A_col - B_col);

    return 0;
}