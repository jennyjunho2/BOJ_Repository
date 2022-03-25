#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int sudoku[9][9];
bool area_check[9][10];
bool row_check[9][10];
bool col_check[9][10];

void print_sudoku() {
    FOR(i, 0, 9) {
        FOR(j, 0, 9) {
            cout << sudoku[i][j] << ' ';
        } cout << endl;
    }
}

void backtrack(int depth) {
    if (depth == 81) {
        print_sudoku();
        exit(0);
    }

    int y = depth / 9;
    int x = depth % 9;

    if (sudoku[y][x] == 0) {
        FOR(i, 1, 10) {
            if (!row_check[y][i] && !col_check[x][i] && !area_check[(y/3)*3 + x/3][i]) {
                row_check[y][i] = true; col_check[x][i] = true; area_check[(y/3)*3 + x/3][i] = true;
                sudoku[y][x] = i;
                backtrack(depth + 1);
                sudoku[y][x] = 0;
                row_check[y][i] = false; col_check[x][i] = false; area_check[(y/3)*3 + x/3][i] = false;
            }
        }
    } else {
        backtrack(depth + 1);
    }
}

int main() { fastio

    FOR(i, 0, 9) {
        FOR(j, 0, 9) {
            cin >> sudoku[i][j];
            if (sudoku[i][j] != 0) {
                row_check[i][sudoku[i][j]] = true;
                col_check[j][sudoku[i][j]] = true;
                area_check[(i/3)*3 + j/3][sudoku[i][j]] = true;
            }
        }
    }
    
    backtrack(0);

    return 0;
}  