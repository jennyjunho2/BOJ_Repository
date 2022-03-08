#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X; cin >> X;
    int cnt = 0;
    while (X > 0) {
        cnt += (X%2);
        X /= 2;
    }

    cout << cnt;

    return 0;
}