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
int N, M;
ll nums[1000001];
ll acc_sum[1000001];
ll mod[1001];

int main() { fastio

    cin >> N >> M;
    ll cnt = 0;
    FOR(i, 0, N) {
        cin >> nums[i];
        if (i == 0) { acc_sum[i] = nums[i] % M; }
        else { acc_sum[i] = (nums[i] + acc_sum[i-1])%M; }

        if (acc_sum[i] == 0) { cnt++; }

        mod[acc_sum[i]]++;
    }
    
    FOR(i, 0, M) {
        cnt += mod[i]*(mod[i]-1)/2;
    }

    cout << cnt;

    return 0;
}