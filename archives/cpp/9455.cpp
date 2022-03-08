#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int arr[101][101];

int iteration(const int& m, const int &n) {
    int result = 0;
    for (register int i = m-2; i >= 0; i--) {
        FOR(j, 0, n) {
            if (arr[i][j] == 1 && arr[i+1][j] == 0) {
                arr[i][j] = 0; arr[i+1][j] = 1;
                result++;
            }
        }
    }

    return result;
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int m, n; cin >> m >> n;
        
        FOR(i, 0, m) {
            FOR(j, 0, n) {
                cin >> arr[i][j];
            }
        }

        int total_cnt = 0;
        while (true) {
            int it = iteration(m, n);
            if (it == 0) {
                break;
            } else {
                total_cnt += it;
            }
        }

        cout << total_cnt << endl;
    }

    return 0;
}