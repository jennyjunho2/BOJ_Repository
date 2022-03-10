#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N; cin >> N;
    cout << (N%2 == 0 ? (N/2+1) * (N/2+1) : ((N+1)/2) * ((N+3)/2));

    return 0;
}