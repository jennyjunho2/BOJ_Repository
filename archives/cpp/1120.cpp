#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    string A, B; cin >> A >> B;
    int len_diff = B.length() - A.length();
    int A_len = A.length();
    int min_diff = 100;
    FOR(i, 0, len_diff+1) {
        string B_sub = B.substr(i, A_len);
        int cnt = 0;
        FOR(j, 0, A_len) {
            if (B_sub[j] != A[j]) {
                cnt++;
            }
        }
        min_diff = min(min_diff, cnt);
    }

    cout << min_diff;

    return 0;
}