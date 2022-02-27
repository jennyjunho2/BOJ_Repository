#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

void stars(int y, int x, int n){
    if ((y/n) % 3 == 1 && (x/n) % 3 == 1){
        cout << ' ';
    } else {
        if (n < 3) {
            cout << '*';
        } else {
            stars(y, x, n/3);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            stars(i, j, N);
        }
        cout << endl;
    }

    return 0;
}