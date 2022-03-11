#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    int cnt = 0;
    FOR(i, 1, N+1) {
        for (auto ch : to_string(i)) {
            if (ch == '3' || ch == '6' || ch == '9') {
                cnt++;
            }
        }
    }

    cout << cnt;
    
    return 0;
}