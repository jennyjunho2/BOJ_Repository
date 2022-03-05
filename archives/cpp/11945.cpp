#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

char arr[10][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            cin >> arr[i][j];
        }
    }

    FOR(i, 0, N) {
        for(int j = M-1; j >= 0; j--) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}