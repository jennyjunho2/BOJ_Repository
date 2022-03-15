#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int C, K, P; cin >> C >> K >> P;
    int sum = 0;
    while (C > 0) {
        sum += (C*K + C*C*P);
        C--;
    }
    cout << sum;
    
    return 0;
}