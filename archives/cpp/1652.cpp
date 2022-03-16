#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

char arr[101][101];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, N) {
            arr[i][j] = word[j];
        }
    }

    int garo = 0, sero = 0;
    FOR(i, 0, N) {
        int streak = 0;
        int max_streak = 0;
        FOR(j, 0, N) {
            if (arr[i][j] == '.') {
                streak++;
            } else {
                if (streak >= 2) { garo++; }
                streak = 0;
            }
        }

        if (streak >= 2) { garo++; }
    }

    FOR(i, 0, N) {
        int streak = 0;
        int max_streak = 0;
        FOR(j, 0, N) {
            if (arr[j][i] == '.') {
                streak++;
            } else {
                if (streak >= 2) { sero++; }
                streak = 0;
            }
        }
        
        if (streak >= 2) { sero++; }
    }

    cout << garo << ' ' << sero;

    return 0;
}