#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    cout << (1-king) << ' ' << (1-queen) << ' ' << (2-rook) << ' ' << (2-bishop) << ' ' << (2-knight) << ' ' << (8-pawn);

    return 0;
}