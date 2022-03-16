#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000
using mat = vector<vector<int>>;

ll N, B;
mat matrix;
mat result;

mat mul(const mat& a, const mat& b) {
    mat temp;
    temp.resize(N);
    FOR(i, 0, N) { temp[i].resize(N); }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            temp[i][j] = 0;
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            FOR(k, 0, N) {
                temp[i][j] += a[i][k] * b[k][j];
                temp[i][j] %= MOD;
            }
        }
    }

    return temp;
}  

mat matrix_power(const ll& n) {
    if (n == 1) { return matrix; }

    mat val = matrix_power(n/2);
    val = mul(val, val);
    if (n%2 == 0) {
        return val;
    } else {
        return mul(matrix, val);
    }
}

int main() {
    fastio

    cin >> N >> B;
    matrix.resize(N);
    FOR(i, 0, N) {
        matrix[i].resize(N);
        FOR(j, 0, N) {
            cin >> matrix[i][j];
            matrix[i][j] %= MOD;
        }
    }

    result = matrix_power(B);
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}