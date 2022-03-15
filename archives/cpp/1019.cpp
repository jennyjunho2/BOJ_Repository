#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

ll arr[10];

void calc(ll num, int exponent) {
    while (num > 0) {
        arr[num%10] += exponent;
        num /= 10;
    }
}

void solve(ll A, ll B, int exponent) {
    while (A%10 != 0 && A <= B) {
        calc(A, exponent);
        A++;
    }

    while (B%10 != 9 && A <= B) {
        calc(B, exponent);
        B--;
    }

    if (A > B) { return; }

    ll cnt = B/10 - A/10 + 1;
    FOR(i, 0, 10) {
        arr[i] += cnt*exponent;
    }

    solve(A/10, B/10, exponent*10);
}

int main() {
    fastio

    ll N; cin >> N;
    solve(1, N, 1);

    FOR(i, 0, 10) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}