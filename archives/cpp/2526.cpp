#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int arr[98];

int main() {
    fastio

    int n, p; cin >> n >> p;
    int num = n;
    while (true) {
        int next = num * n % p;
        if (arr[next] == 2) {
            break;
        } else {
            arr[next]++;
        }
        num = next;
    }

    int cnt = 0;
    FOR(i, 0, 98) {
        if (arr[i] == 2) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}