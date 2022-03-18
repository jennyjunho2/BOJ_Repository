#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int A[50][50];
int B[50][50];
int N, M;

void flip(int y, int x) {
    FOR(i, y, y+3) {
        FOR(j, x, x+3) {
            A[i][j] = abs(A[i][j] - 1);
        }
    }
}

bool cmp() {
    FOR(i, 0, N) {
        FOR(j, 0, M) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, M) {
            A[i][j] = word[j] - '0';
        }
    }

    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, M) {
            B[i][j] = word[j] - '0';
        }
    }
    // cannot flip
    if (N < 3 || M < 3) {
        cout << (cmp() ? 0 : -1);
        return 0;
    }

    int flip_cnt = 0;
    FOR(i, 0, N-2) {
        FOR(j, 0, M-2) {
            if (A[i][j] != B[i][j]) {
                flip_cnt++;
                flip(i, j);
            }
        }
    }

    cout << (cmp() ? flip_cnt : -1);

    return 0;
}