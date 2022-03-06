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

    int n, T; cin >> n >> T;
    int sum = 0;
    FOR(i, 0, n) {
        int temp; cin >> temp;
        sum += temp;
        if (sum > T) {
            cout << i;
            return 0;
        }
    }

    cout << n;

    return 0;
}