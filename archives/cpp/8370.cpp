
#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int n1, k1, n2, k2; cin >> n1 >> k1 >> n2 >> k2;
    cout << n1*k1 + n2*k2;

    return 0;
}