#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

// isqrt 알아보기.
int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        memset(arr, 0, sizeof(arr));
        FOR(i, 1, n+1) {
            for (int j = i; j <= n; j += i) {
                arr[j] = abs(arr[j] - 1);
            }
        }

        int sum = 0;
        FOR(i, 1, n+1) {
            sum += arr[i];
        }

        cout << sum << endl;
    }
    
    return 0;
}