#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N;
int arr[128][128];
int white, blue;

void func(int y, int x, int len) {
    int num = arr[y][x];
    if (len == 1) {
        if (num == 1) { blue++; }
        else { white++; }
        return;
    }

    bool is_same = true;
    FOR(i, y, y+len) {
        FOR(j, x, x+len) {
            if (num != arr[i][j]) {
                is_same = false;
                break;
            }
        }
        if (!is_same) { break; }
    }

    if (is_same) {
        if (num == 1) { blue++; }
        else { white++; }
        return;
    } else {
        FOR(i, 0, 2) {
            FOR(j, 0, 2) {
                func(y + (len/2)*i, x + (len/2)*j, len/2);
            }
        }
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N){
        FOR(j, 0, N) {
            cin >> arr[i][j];
        }
    }

    func(0, 0, N);
    cout << white << endl << blue;

    return 0;
}