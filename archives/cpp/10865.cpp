#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int arr[100001];

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, M) {
        int A, B; cin >> A >> B;
        arr[A]++; arr[B]++;
    }

    FOR(i, 1, N+1) {
        cout << arr[i] << endl;
    }

    return 0;
}