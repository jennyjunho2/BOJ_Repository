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

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        a %= 10;
        if (a == 1) {
            cout << 1;
        } else if (a == 2){
            int arr[4] = {6, 2, 4, 8};
            cout << arr[b%4];
        } else if (a == 3) {
            int arr[4] = {1, 3, 9, 7};
            cout << arr[b%4];
        } else if (a == 4) {
            int arr[2] = {6, 4};
            cout << arr[b%2];
        } else if (a == 5) {
            cout << 5;
        } else if (a == 6) {
            cout << 6;
        } else if (a == 7) {
            int arr[4] = {1, 7, 9, 3};
            cout << arr[b%4];
        } else if (a == 8) {
            int arr[4] = {6, 8, 4, 2};
            cout << arr[b%4];
        } else if (a == 9) {
            int arr[2] = {1, 9};
            cout << arr[b%2];
        } else if (a == 0) {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}