#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int graph[9][9];
bool row_check[9][10];
bool col_check[9][10];
bool area_check[9][10];

void print_graph() {
    FOR(i, 0, 9) {
        FOR(j, 0, 9) {
            cout << graph[i][j];
        } cout << endl;
    }
}

void backtrack(int depth) {
    if (depth == 81) {
        print_graph();
        exit(0);
    }

    int y = depth/9;
    int x = depth%9;
    if (graph[y][x] == 0) {
        FOR(i, 1, 10) {
            if (!row_check[y][i] && !col_check[x][i] && !area_check[(y/3)*3 + x/3][i]) {
                row_check[y][i] = true; col_check[x][i] = true; area_check[(y/3)*3 + x/3][i] = true;
                graph[y][x] = i;
                backtrack(depth + 1);
                graph[y][x] = 0;
                row_check[y][i] = false; col_check[x][i] = false; area_check[(y/3)*3 + x/3][i] = false;
            }
        }
    } else {
        backtrack(depth + 1);
    }
}

int main() { fastio

    FOR(i, 0, 9) {
        string temp; cin >> temp;
        FOR(j, 0, 9) {
            graph[i][j] = temp[j] - '0';

            if (graph[i][j] != 0) {
                row_check[i][graph[i][j]] = true;
                col_check[j][graph[i][j]] = true;
                area_check[(i/3)*3 + j/3][graph[i][j]] = true;
            }
        }
    }

    backtrack(0);

    return 0;
}