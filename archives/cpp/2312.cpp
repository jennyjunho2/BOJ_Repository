#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int cnt = 0, num = 2;
        while (true) {
            if (N%num == 0) {
                N /= num;
                cnt++;
            } else {
                if (cnt != 0) {
                    cout << num << ' ' << cnt << endl;
                }
                if (N == 1) {
                    break;
                }
                num++;
                cnt = 0;
            }
        }
    }

    return 0;
}