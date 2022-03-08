#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

#define MOD 45678
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    long long num = 5, inc = 7;
    FOR(i, 1, N) {
        num += inc;
        inc += 3;
    }
    cout << (num % MOD);

    return 0;
}