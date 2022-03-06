#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

char arr[8][8];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    FOR(i, 0, 8) {
        FOR(j, 0, 8) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    FOR(i, 0, 8) {
        if (i%2 == 0) {
            for (int j = 0; j < 8; j += 2) {
                if (arr[i][j] == 'F') {
                    cnt++;
                }
            }
        } else {
            for (int j = 1; j < 8; j += 2) {
                if (arr[i][j] == 'F') {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}