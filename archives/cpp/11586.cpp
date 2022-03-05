#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

char arr[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 0, N){
        FOR(j, 0, N){
            cin >> arr[i][j];
        }
    }

    int K; cin >> K;
    if (K == 1) {
        FOR(i, 0, N){
            FOR(j, 0, N) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    } else if (K == 2) {
        FOR(i, 0, N) {
            for (int j = N-1; j >= 0; j--) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    } else if (K == 3) {
        for (int i = N-1; i >= 0; i--) {
            FOR(j, 0, N) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}