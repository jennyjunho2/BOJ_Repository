#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int N, M; cin >> N >> M;
    int arr[N];
    FOR(i, 0, N) {
        cin >> arr[i];
    }

    FOR(i, 1, M+1) {
        FOR(j, 0, N-1) {
            if (arr[j]%i > arr[j+1]%i) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    FOR(i, 0, N) {
        cout << arr[i] << endl;
    }

    return 0;
}