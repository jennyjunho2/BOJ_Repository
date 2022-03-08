#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N;
int cnt = 0;

bool col_check[15];
bool diag_check1[35];
bool diag_check2[35];

void func(int depth) {
    if (depth == N) {
        cnt++;
        return;
    }

    FOR(i, 0, N) {
        if (col_check[i] || diag_check1[i+depth] || diag_check2[depth-i+N-1]) {
            continue;
        }

        col_check[i] = true;
        diag_check1[i+depth] = true;
        diag_check2[depth-i+N-1] = true;
        func(depth+1);
        col_check[i] = false;
        diag_check1[i+depth] = false;
        diag_check2[depth-i+N-1] = false;
    }
}

int main() {
    fastio

    cin >> N;
    func(0);
    cout << cnt;

    return 0;
}