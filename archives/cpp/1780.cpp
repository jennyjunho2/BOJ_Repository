#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[2187][2187];
int minus_cnt, zeros_cnt, ones_cnt;

void func(int y, int x, int length) {
    int num = arr[y][x];
    if (length == 1) {
        switch (num) {
            case -1:
                minus_cnt++;
                break;
            case 0:
                zeros_cnt++;
                break;
            case 1:
                ones_cnt++;
                break;
        }
        return;
    }

    bool is_same = true;
    FOR(i, y, y+length) {
        FOR(j, x, x+length) {
            if (num != arr[i][j]) {
                is_same = false;
                break;
            }
        }
        if (!is_same) { break; }
    }

    if (is_same) {
        switch (num) {
            case -1:
                minus_cnt++;
                break;
            case 0:
                zeros_cnt++;
                break;
            case 1:
                ones_cnt++;
                break;
        }
        return;
    } else {
        FOR(i, 0, 3) {
            FOR(j, 0, 3) {
                func(y + (length/3)*i, x + (length/3)*j, length/3);
            }
        }
    }
}

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        FOR (j, 0, N) {
            cin >> arr[i][j];
        }
    }

    func(0, 0, N);

    cout << minus_cnt << endl << zeros_cnt << endl << ones_cnt;

    return 0;
}