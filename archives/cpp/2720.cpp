#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int dp[41][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int coins[4] = {25, 10, 5, 1};
    int T; cin >> T;
    vector<int> ans;
    while (T--) {
        ans.clear();
        int C; cin >> C;
        int cnt = 0;
        for (auto i: coins) {
            ans.push_back(C / i);
            C -= i * (C / i);
        }

        FOR(i, 0, 4){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}