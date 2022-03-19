#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int main() {
    fastio
    ll L; cin >> L;
    cout << fixed; cout.precision(15);
    cout << L * L * sqrt(3) / 4;

    return 0;
} 