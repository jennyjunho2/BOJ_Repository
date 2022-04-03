#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int acc[101];
int main() {fastio

    acc[0] = 0;
    FOR(i, 1, 101) {
        acc[i] = acc[i-1] + i;
    }

    int N; cin >> N;
    bool is_odd = false, is_even = false;
    FOR(i, 1, 101-N+1) {
        int temp_sum = acc[i+N-1] - acc[i-1];
        if (temp_sum & 1) {
            is_odd = true;
        } else {
            is_even = true;
        }
    }

    if (is_odd && is_even) {
        cout << "Either";
    } else if (is_odd) {
        cout << "Odd";
    } else {
        cout << "Even";
    }

    return 0;
}
