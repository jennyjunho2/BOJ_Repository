#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    string H; cin >> H;
    string N; cin >> N;
    int cnt = 0;
    size_t pos = H.find(N, 0);
    while (pos != string::npos) {
        cnt++;
        pos = H.find(N, pos+1);
    }

    cout << cnt;

    return 0;
}