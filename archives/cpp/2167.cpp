#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;
int arr[301][301];
int acc_sum[301][301];

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 1, N+1) {
        FOR(j, 1, M+1) {
            cin >> arr[i][j];

            if (j == 0) {
                acc_sum[i][j] = 0;
            } else {
                acc_sum[i][j] = acc_sum[i][j-1] + arr[i][j];
            }
        }
    }

    int K; cin >> K;
    while (K--) {
        int i, j, x, y; cin >> i >> j >> x >> y;
        int sum = 0;
        FOR(row, i, x+1) {
            sum += acc_sum[row][y] - acc_sum[row][j-1];
        }

        cout << sum << endl;
    }


    
    return 0;
}