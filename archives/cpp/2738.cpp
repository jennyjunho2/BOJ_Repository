#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[100][100];
int arr2[100][100];

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> arr[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> arr2[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cout << arr[i][j] + arr2[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}