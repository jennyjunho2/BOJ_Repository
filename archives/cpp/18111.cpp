#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int field[501][501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; long B; cin >> N >> M >> B;
    int max_height = -1;
    int min_height = 266;
    FOR(i, 1, N+1){
        FOR(j, 1, M+1){
            int temp; cin >> temp;
            field[i][j] = temp;
            if (max_height < temp) {
                max_height = temp;
            } else if (min_height > temp) {
                min_height = temp;
            }
        }   
    }

    int min_time = INF;
    int ans_height;
    FOR(height, min_height, max_height+1) {
        int in = 0, out = 0;
        FOR(i, 1, N+1){
            FOR(j, 1, M+1) {
                if (field[i][j] > height) {
                    in += (field[i][j] - height);
                } else if (field[i][j] < height) {
                    out += (height - field[i][j]);
                }
            }
        }

        if (out > in + B) {
            continue;
        }

        int time = 2 * in + out;
        if (time <= min_time) {
            min_time = time;
            ans_height = height;
        }
    }

    cout << min_time << ' ' << ans_height;

    return 0;
}