#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, S; ll ans;
int half;
map<int, int> table;
vector<int> nums;

void left(int idx, int sum) {
    if (idx == half) {
        table[sum]++;
        return;
    }
    left(idx+1, sum);
    left(idx+1, sum + nums[idx]);
}

void right(int idx, int sum) {
    if (idx == N) {
        ans += table[S-sum];
        return;
    }

    right(idx+1, sum);
    right(idx+1, sum + nums[idx]);
}

int main() {fastio
    
    cin >> N >> S;
    nums.resize(N);
    FOR(i, 0, N) { cin >> nums[i]; }

    half = N/2;
    left(0, 0);
    right(half, 0);

    if (S == 0) { ans--; }
    cout << ans;

    return 0;
}
