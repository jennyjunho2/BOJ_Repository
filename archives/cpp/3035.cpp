#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

#define MOD 45678
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int R, C, ZR, ZC; cin >> R >> C >> ZR >> ZC;

    char arr[R][C];

    FOR(i, 0, R) {
        string temp; cin >> temp;
        FOR(j, 0, C) {
            arr[i][j] = temp[j];
        }
    }

    FOR(i, 0, R*ZR) {
        FOR(j, 0, C*ZC) {
           cout << arr[i/ZR][j/ZC];
        }
        cout << endl;
    }

    return 0;
}