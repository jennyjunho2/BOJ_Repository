#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int N; cin >> N;
    int ans = 1;
    FOR(i, 0, N) {
        ans *= 2;
    } 
    
    cout << ans;

    return 0;
} 