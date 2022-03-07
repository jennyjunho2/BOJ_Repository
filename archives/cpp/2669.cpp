#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    FOR(i, 0, 4) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        FOR(i, y1, y2) {
            FOR(j, x1, x2) {
                arr[i][j] = 1;
            }
        }
    }

    int sum = 0;
    FOR(i, 1, 101) {
        FOR(j, 1, 101) {
            sum += arr[i][j];
        }
    }

    cout << sum;

    return 0;
}