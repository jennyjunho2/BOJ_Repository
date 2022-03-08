#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        FOR(i, y1, y2+1) {
            FOR(j, x1, x2+1) {
                arr[i][j]++;
            }
        }
    }

    int cnt = 0;
    FOR(i, 1, 101) {
        FOR(j, 1, 101) {
            if (arr[i][j] > M) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}