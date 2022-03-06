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

    int N; cin >> N;
    N = 1000 - N;

    vector<int> money = {500, 100, 50, 10, 5};
    int cnt = 0;
    FOR(i, 0, 5) {
        cnt += N / money[i];
        N %= money[i];
    }
    cout << cnt + N;

    return 0;
}