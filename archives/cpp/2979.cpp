#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(arr, 0, sizeof(arr));
    int A, B, C; cin >> A >> B >> C;
    FOR(i, 0, 3) {
        int a, b; cin >> a >> b;
        FOR(j, a, b) {
            arr[j]++;
        }
    }

    int sum = 0;
    FOR(i, 1, 101) {
        if (arr[i] == 1) {
            sum += A;
        } else if (arr[i] == 2) {
            sum += 2*B;
        } else if (arr[i] == 3) {
            sum += 3*C;
        }
    }

    cout << sum;

    return 0;
}