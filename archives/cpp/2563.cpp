#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        int a, b; cin >> a >> b;
        FOR(i, a, a+10) {
            FOR(j, b, b+10) {
                arr[i][j] = 1;
            }
        }
    }

    int sum = 0;
    FOR(i, 1, 101) {
        FOR(j, 1, 101) {
            sum += arr[i][j];
        }
    }

    cout << sum;

    return 0;
}