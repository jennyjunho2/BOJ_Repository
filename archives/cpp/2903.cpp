#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int dp[16];

int main() {
    fastio

    int N; cin >> N;
    cout << (1+(1<<N)) * (1+(1<<N));

    return 0;
}