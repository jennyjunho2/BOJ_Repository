#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int count_one(int N) {
    int cnt = 0;
    while (N > 0) {
        cnt += (N%2);
        N = N >> 1;
    }

    return cnt;
}

int main() {
    fastio

    int N, K; cin >> N >> K;
    if (N <= K) { cout << 0; return 0; }

    int ans = 0;
    while (true) {
        int one_cnt = count_one(N);
        if (one_cnt <= K) {
            break;
        }
        N++;
        ans++;
    }

    cout << ans;

    return 0;
}