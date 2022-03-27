#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
char castle[50][50];
int row[50];
int col[50];

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> castle[i][j];

            if (castle[i][j] == 'X') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    int row_cnt = N, col_cnt = M;
    FOR(i, 0, N) {
        if (row[i] > 0) { row_cnt--; }
    }

    FOR(j, 0, M) {
        if (col[j] > 0) { col_cnt--; }
    }

    cout << max(row_cnt, col_cnt);

    return 0;
}