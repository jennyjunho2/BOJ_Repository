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

    int n; cin >> n;
    while (n--) {
        int k; cin >> k;
        FOR(i, 0, k) {
            cout << '=';
        }
        cout << endl;
    }
    
    return 0;
}