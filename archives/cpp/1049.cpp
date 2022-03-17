#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N, M;

int main() {
    fastio

    cin >> N >> M;
    int six_min = 1001, one_min = 1001;
    FOR(i, 0, M) {
        int six, one; cin >> six >> one;
        six_min = min(six_min, six);
        one_min = min(one_min, one);
    }

    int a = N/6; int b = N%6;
    if (one_min*b >= six_min) {
        cout << six_min*(a+1);
    } else if (one_min*6 < six_min) {
        cout << N*one_min;
    } else {
        cout << a*six_min + b*one_min;
    }

    return 0;
}