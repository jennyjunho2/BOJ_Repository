#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N;
char board[50][50];
int result = 0;

void check_board() {
    FOR(i, 0, N) {
        char ch = board[i][0];
        int cnt = 1;
        FOR(j, 1, N) {
            if (ch == board[i][j]) {
                cnt++;
            } else {
                cnt = 1;
            }
            ch = board[i][j];
            result = max(result, cnt);
        }
    }

    FOR(j, 0, N) {
        char ch = board[0][j];
        int cnt = 1;
        FOR(i, 1, N) {
            if (ch == board[i][j]) {
                cnt++;
            } else {
                cnt = 1;
            }
            ch = board[i][j];
            result = max(result, cnt);
        }
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> board[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N-1) {
            swap(board[i][j], board[i][j+1]);
            check_board();
            swap(board[i][j], board[i][j+1]);
        }
    }

    FOR(j, 0, N) {
        FOR(i, 0, N-1) {
            swap(board[i][j], board[i+1][j]);
            check_board();
            swap(board[i][j], board[i+1][j]);
        }
    }

    cout << result;

    return 0;
}