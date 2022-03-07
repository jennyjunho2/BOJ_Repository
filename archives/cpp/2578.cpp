#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int bingo[5][5];
bool visited[5][5];

bool check_bingo() {
    int cnt = 0;
    FOR(i, 0, 5) {
        if (visited[i][0] && visited[i][1] && visited[i][2] && visited[i][3] && visited[i][4]) {
            cnt++;
        }

        if (visited[0][i] && visited[1][i] && visited[2][i] && visited[3][i] && visited[4][i]) {
            cnt++;
        }
    }

    if (visited[0][0] && visited[1][1] && visited[2][2] && visited[3][3] && visited[4][4]) {
        cnt++;
    }

    if (visited[0][4] && visited[1][3] && visited[2][2] && visited[3][1] && visited[4][0]) {
        cnt++;
    }

    if (cnt >= 3) { return true; } else { return false; } 
}

void update(int temp) {
    int temp_y, temp_x;
    FOR(i, 0, 5) {
        FOR(j, 0, 5) {
            if (bingo[i][j] == temp) {
                visited[i][j] = true;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(visited, false, sizeof(visited));
    FOR(i, 0, 5) {
        FOR(j, 0, 5) {
            cin >> bingo[i][j];
        }
    }
    
    FOR(i, 1, 26) {
        int temp; cin >> temp;
        update(temp);
        if (check_bingo()) {
            cout << i;
            break;
        }
    }
    return 0;
}