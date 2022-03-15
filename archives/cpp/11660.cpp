#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[1025][1025];
int arr_acc[1025][1025];

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 1, N+1) {
        FOR(j, 1, N+1) {
            cin >> arr[i][j];
        }
    }

    FOR(i, 1, N+1) {
        FOR(j, 1, N+1) {
            if (j == 1) {
                arr_acc[i][j] = arr[i][j];
            } else {
                arr_acc[i][j] = arr_acc[i][j-1] + arr[i][j];
            }
        }
    }

    while (M--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        FOR(i, x1, x2+1) {
            sum += arr_acc[i][y2] - arr_acc[i][y1-1];
        }

        cout << sum << endl;
    }

    return 0;
}