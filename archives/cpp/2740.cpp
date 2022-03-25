#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M, K;
int A[100][100];
int B[100][100];
int ans[100][100];

int main() { fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    FOR(i, 0, M) {
        FOR(j, 0, K) {
            cin >> B[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, K) {
            FOR(k, 0, M) {
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, K) {
            cout << ans[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}  