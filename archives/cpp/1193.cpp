#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X; cin >> X;
    int col = 0;

    while (X > (col*(col+1) / 2)) {
        col++;
    }
    int row = X + col - 1 - (col*(col+1) / 2);
    if (col % 2 == 0){
        cout << row + 1 << '/' << col - row;
    } else {
        cout << col - row << '/' << row + 1;
    }

    return 0;
}