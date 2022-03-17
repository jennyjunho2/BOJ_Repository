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

    int N, a, b; cin >> N >> a >> b;
    int cnt = 0;
    while (a != b) {
        a = (a+1)/2;
        b = (b+1)/2;
        cnt++;
    }

    cout << cnt;

    return 0;
}