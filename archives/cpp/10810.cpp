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

    int N, M; cin >> N >> M;
    int arr[N];
    memset(arr, 0, sizeof(arr));
    FOR(i, 0, M) {
        int a, b, c; cin >> a >> b >> c;
        FOR(j, a, b+1) {
            arr[j-1] = c;
        }
    }

    FOR(i, 0, N) {
        cout << arr[i] << ' ';
    }

    return 0;
}