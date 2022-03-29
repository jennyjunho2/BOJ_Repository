#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> nums;
bool dp[2000][2000];

int main() {fastio

    cin >> N;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    FOR(i, 0, N) {
        FOR(ptr1,0, N-i) {
            int ptr2 = ptr1 + i;
            if (i == 0) {
                dp[ptr1][ptr2] = true;
            } else if (i == 1) {
                if (nums[ptr1] == nums[ptr2]) {
                    dp[ptr1][ptr2] = true;
                } else {
                    dp[ptr1][ptr2] = false;
                }
            } else {
                if (dp[ptr1+1][ptr2-1] && nums[ptr1] == nums[ptr2]) {
                    dp[ptr1][ptr2] = true;
                } else {
                    dp[ptr1][ptr2] = false;
                }
            }
        }
    }

    TC {
        int a, b; cin >> a >> b;
        cout << dp[a-1][b-1] << endl;
    }

    return 0;
}