#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n;
char arr[3072][6143];

void print(int y, int x) {
    arr[y][x] = '*';
    arr[y+1][x-1] = '*';
    arr[y+1][x+1] = '*';

    FOR(i, 0, 5) {
        arr[y+2][x-2+i] = '*';
    }
}

void func(int depth, int y, int x) {
    if (depth == 3) {
        print(y, x);
        return;
    }

    int next_depth = depth/2;
    func(next_depth, y, x);
    func(next_depth, y + next_depth, x - next_depth);
    func(next_depth, y + next_depth, x + next_depth);
}

int main() { fastio

    cin >> n;
    fill(&arr[0][0], &arr[0][0]+3072*6143, ' ');
    func(n, 0, n-1);
    FOR(i, 0, n) {
        FOR(j, 0, 2*n-1) {
            cout << arr[i][j];
        } cout << endl;
    }

    return 0;
}  