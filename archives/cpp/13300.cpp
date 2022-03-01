#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[2][6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    memset(arr, 0, sizeof(arr));
    int N, K; cin >> N >> K;
    int S, Y;
    FOR(i, 0, N){
        cin >> S >> Y;
        arr[S][Y]++;
    } 

    int cnt = 0;
    FOR(i, 0, 2){
        FOR(j, 1, 7){
            cnt += (ceil(((float)arr[i][j]) / K));
        }
    }

    cout << cnt;
    return 0;
}