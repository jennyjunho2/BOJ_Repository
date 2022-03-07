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

    int N, F; cin >> N; cin >> F;
    int num = 0;
    N = (N/100) * 100;

    while (true) {
        int temp = N + num;
        if (temp%F == 0) {
            break;
        }
        num++;
    }

    if (num < 10) {
        cout << '0' << num;
    } else {
        cout << num;
    }

    return 0;
}