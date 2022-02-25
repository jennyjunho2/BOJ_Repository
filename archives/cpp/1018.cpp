#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    char chess1[8][8] ={{'B','W','B','W','B','W','B','W'},
					   {'W','B','W','B','W','B','W','B'},
					   {'B','W','B','W','B','W','B','W'},
					   {'W','B','W','B','W','B','W','B'},
					   {'B','W','B','W','B','W','B','W'},
					   {'W','B','W','B','W','B','W','B'},
					   {'B','W','B','W','B','W','B','W'},
					   {'W','B','W','B','W','B','W','B'}};
    char chess[N][M];
    
    FOR(i, 0, N){
        FOR(j, 0, M) {
            cin >> chess[i][j];
        }
    }

    int ans = 65;
    FOR(i, 0, N-7){
        FOR(j, 0, M-7){
            int result = 0;
            FOR(y, i, i+8){
                FOR(x, j, j+8){
                    if (chess[y][x] != chess1[y-i][x-j]){
                        result++;
                    }
                }
            }
            result = min(result, 64 - result);
            ans = min(ans, result);
        }
    }
    cout << ans;
    
    return 0;
}