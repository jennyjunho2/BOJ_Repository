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

    int arr[3] = {1, 0, 0};
    string seq; cin >> seq;
    for (char ch: seq) {
        if (ch == 'A') {
            swap(arr[0], arr[1]);
        } else if (ch == 'B') {
            swap(arr[1], arr[2]);
        } else if (ch == 'C') {
            swap(arr[0], arr[2]);
        }
    }

    FOR(i, 0, 3) {
        if (arr[i] == 1) {
            cout << i+1;
        }
    }
    
    return 0;
}