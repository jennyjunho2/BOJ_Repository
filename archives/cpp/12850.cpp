#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000007
using mat = vector<vector<ll>>;
ll D;
mat ans;
mat v = {
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 1, 0}
};

mat matmul(const mat& m1, const mat& m2) {
    mat temp;
    temp.resize(8);
    FOR(i, 0, 8) { temp[i].resize(8); }
    FOR(i, 0, 8) { FOR(j, 0, 8) { temp[i][j] = 0; } }

    FOR(i, 0, 8) {
        FOR(j, 0, 8) {
            FOR(k, 0, 8) {
                temp[i][j] += m1[i][k] * m2[k][j];
                temp[i][j] %= MOD;
            }
        }
    }

    return temp;
}

mat POW(ll exp) {
    if (exp == 1) { return v; }

    mat val = POW(exp / 2);
    val = matmul(val, val);
    if (exp & 1) {
        val = matmul(val, v);
    }

    return val;
}

int main() {
    fastio

    cin >> D;
    ans.resize(8);
    FOR(i, 0, 8) { ans[i].resize(8); }
    FOR(i, 0, 8) { ans[i][i] = 1; }

    mat x = matmul(ans, POW(D));
    cout << x[0][0];

    return 0;
}