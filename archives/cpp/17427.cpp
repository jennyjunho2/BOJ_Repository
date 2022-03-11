#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    long long sum = 0;
    FOR(i, 1, N+1) {
        sum += (i * (N/i));
    }
    cout << sum;

    return 0;
}