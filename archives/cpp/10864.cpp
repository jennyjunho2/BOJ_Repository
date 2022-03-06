#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    memset(arr, 0, sizeof(arr));
    FOR(i, 0, M) {
        int A, B; cin >> A >> B;
        arr[A]++; arr[B]++;
    }

    FOR(i, 1, N+1) {
        cout << arr[i] << endl;
    }

    return 0;
}