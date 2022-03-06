#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[3];
    int T; cin >> T;
    FOR(i, 1, T+1) {
        int a, b, c; cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        cout << "Scenario #" << i << ':' << endl;
        if (arr[2]*arr[2] == arr[1]*arr[1] + arr[0]*arr[0]) {
            cout << "yes" << endl << endl;
        } else {
            cout << "no" << endl << endl;
        }
    }

    return 0;
}