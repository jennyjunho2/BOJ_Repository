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

    int cnt = 0;
    FOR(B, 1, 501) {
        FOR(A, B, 501) {
            if (A*A == B*B + N) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}