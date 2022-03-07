#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 1, N+1) {
        int x1, y1, dx, dy; cin >> x1 >> y1 >> dx >> dy;
        FOR(j, y1, y1+dy) {
            FOR(k, x1, x1+dx) {
                arr[j][k] = i;
            }
        }
    }

    FOR(i, 1, N+1) {
        int cnt = 0;
        FOR(j, 0, 1001) {
            FOR(k, 0, 1001) {
                if (arr[j][k] == i) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}