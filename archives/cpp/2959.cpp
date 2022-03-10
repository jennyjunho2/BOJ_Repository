#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int arr[4];
    FOR(i, 0, 4) {
        cin >> arr[i];
    }

    sort(arr, arr+4);
    cout << arr[0] * arr[2];

    return 0;
}