#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[100][100];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> arr[i][j];
        }
    }

    FOR(k, 0, N) {
        FOR(i, 0, N) {
            FOR(j, 0, N) {
                if (arr[i][k] == 1 && arr[k][j] == 1) {
                    arr[i][j] = 1;
                }
            }
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}