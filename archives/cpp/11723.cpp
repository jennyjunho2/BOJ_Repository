#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
// set으로 연산하면 시간초과남.
int arr[21];

int main() {
    fastio

    int M; cin >> M;
    int temp;
    while (M--) {
        string inst; cin >> inst;
        if (inst == "add") {
            cin >> temp;
            arr[temp] = 1;
        } else if (inst == "remove") {
            cin >> temp;
            arr[temp] = 0;
        } else if (inst == "check") {
            cin >> temp;
            cout << (arr[temp] == 1 ? 1 : 0) << endl;
        } else if (inst == "toggle") {
            cin >> temp;
            arr[temp] = abs(arr[temp]-1);
        } else if (inst == "all") {
            fill(arr+1, arr+21, 1);
        } else if (inst == "empty") {
            fill(arr+1, arr+21, 0);
        }
    }

    return 0;
}