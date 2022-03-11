#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    while (true) {
        int n; cin >> n;
        if (cin.eof()) { break; }

        int num = 0;
        int cnt = 1;
        while (true) {
            num = num*10 + 1;
            num %= n;
            if (num == 0) {
                cout << cnt << endl;
                break;
            }
            cnt++;
        }
    }

    return 0;
}