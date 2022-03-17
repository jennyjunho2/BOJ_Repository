#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

ll m, n;

ll count_two(ll num) {
    ll cnt = 0;

    while (num >= 2) {
        cnt += num/2;
        num /= 2;
    }

    return cnt;
}

ll count_five(ll num) {
    ll cnt = 0;

    while (num >= 5) {
        cnt += num/5;
        num /= 5;
    }

    return cnt;
}

int main() {
    fastio

    cin >> n >> m;
    ll five_cnt = count_five(n) - count_five(m) - count_five(n-m);
    ll two_cnt = count_two(n) - count_two(m) - count_two(n-m);
    cout << min(five_cnt, two_cnt);

    return 0;
}