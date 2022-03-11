#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int arr[50][50];

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        string temp; cin >> temp;
        FOR(j, 0, M) {
            arr[i][j] = temp[j] - '0';
        }
    }

    int ans = 1;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            FOR(k, 1, min(M, N)) {
                if (i+k < N && j+k < M) {
                    if (arr[i][j] == arr[i+k][j] && arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i+k][j+k]) {
                        ans = max(ans, k+1);
                    }
                }
            }
        }
    }

    cout << ans*ans;

    return 0;
}