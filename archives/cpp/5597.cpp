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

    bool arr[30];
    memset(arr, false, sizeof(arr));
    FOR(i, 0, 28){
        int temp; cin >> temp;
        arr[temp-1] = true;
    }

    FOR(i, 0, 30){
        if (!arr[i]) {
            cout << i+1 << endl;
        }
    }

    return 0;
}