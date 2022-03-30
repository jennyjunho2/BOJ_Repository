#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, r, c;
int dp[501][501];
vector<p> matrix = {make_pair(0, 0)};

int main() {fastio
    cin >> N;
    FOR(i, 0, N) {
        cin >> r >> c;
        matrix.push_back({r, c});
    }

    FOR(i, 1, N) { // start
        FOR(j, 1, N-i+1) { // end
            dp[j][j+i] = 987654321;
            FOR(k, j, i+j+1) { // difference
                dp[j][j+i] = min(dp[j][j+i], dp[j][k] + matrix[j].first*matrix[k].second*matrix[j+i].second + dp[k+1][j+i]);
            }
        }
    }

    cout << dp[1][N];

    return 0;
}