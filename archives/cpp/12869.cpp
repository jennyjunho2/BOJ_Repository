#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int dp[61][61][61];
int scv[3];

int main() { fastio

    FOR(scv1, 0, 61) {
        FOR(scv2, 0, 61) {
            FOR(scv3, 0, 61) {
                if (scv1 == 0 && scv2 == 0 && scv3 == 0) { continue; }
                dp[scv1][scv2][scv3] = min({
                    dp[max(scv1-9, 0)][max(scv2-3, 0)][max(scv3-1, 0)],
                    dp[max(scv1-9, 0)][max(scv2-1, 0)][max(scv3-3, 0)],
                    dp[max(scv1-3, 0)][max(scv2-9, 0)][max(scv3-1, 0)],
                    dp[max(scv1-3, 0)][max(scv2-1, 0)][max(scv3-9, 0)],
                    dp[max(scv1-1, 0)][max(scv2-3, 0)][max(scv3-9, 0)],
                    dp[max(scv1-1, 0)][max(scv2-9, 0)][max(scv3-3, 0)]
                }) + 1;
            }
        }
    }

    cin >> N;
    FOR(i, 0, N) {
        cin >> scv[i];
    }

    cout << dp[scv[0]][scv[1]][scv[2]];

    return 0;
}