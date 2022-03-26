#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
string A, B;
int dp[4001][4001];

int main() { fastio

    cin >> A; cin >> B;
    int A_size = A.size(), B_size = B.size();
    FOR(i, 1, A_size+1) {
        FOR(j, 1, B_size+1) {
            if (i == 0 || j == 0) {
               continue;
            } else if (A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = 0;
            }
        }
    }

    cout << *max_element(&dp[0][0], &dp[0][0]+4001*4001);

    return 0;
}