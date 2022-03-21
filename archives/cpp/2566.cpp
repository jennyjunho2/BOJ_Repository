#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int graph[9][9];

int main() {
    fastio

    FOR(i, 0, 9) {
        FOR(j, 0, 9) {
            cin >> graph[i][j];
        }
    }

    int max_num = *max_element(&graph[0][0], &graph[0][0]+9*9);
    FOR(i, 0, 9){
        FOR(j, 0, 9) {
            if (graph[i][j] == max_num) {
                cout << max_num << endl;
                cout << i+1 << ' ' << j+1;
                return 0;
            }
        }
    }

    return 0;
} 