#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() { fastio

    int N, M; cin >> N >> M;
    cout << M - gcd(N, M);

    return 0;
}  