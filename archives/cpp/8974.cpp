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

    int num = 1, idx = 1;
    while (idx <= 1000) {
        if (idx == (num * (num+1) / 2)) {
            arr[idx] = num;
            num++;
        } else if (idx < (num * (num+1) / 2)) {
            arr[idx] = num;
        }
        idx++;
    }

    int A, B; cin >> A >> B;
    int sum = 0;
    FOR(i, A, B+1) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}