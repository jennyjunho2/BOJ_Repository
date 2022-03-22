#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N;
int graph[10][10];
int black_max_cnt = 0;
int white_max_cnt = 0;
vector<p> bishops_black;
vector<p> bishops_white;
int bishops_black_size;
int bishops_white_size;
bool diag1[21]; // i+j
bool diag2[21]; // N+i-j

void backtrack(int depth, int min_idx, bool is_black) {
    if (is_black) {
        black_max_cnt = max(black_max_cnt, depth);
        FOR(i, min_idx, bishops_black_size) {
            int y = bishops_black[i].first;
            int x = bishops_black[i].second;

            if (!diag1[y+x] && !diag2[N+y-x]) {
                diag1[y+x] = true;
                diag2[N+y-x] = true;
                backtrack(depth+1, i, is_black);
                diag1[y+x] = false;
                diag2[N+y-x] = false;
            }
        }
    } else {
        white_max_cnt = max(white_max_cnt, depth);
        FOR(i, min_idx, bishops_white_size) {
            int y = bishops_white[i].first;
            int x = bishops_white[i].second;

            if (!diag1[y+x] && !diag2[N+y-x]) {
                diag1[y+x] = true;
                diag2[N+y-x] = true;
                backtrack(depth+1, i, is_black);
                diag1[y+x] = false;
                diag2[N+y-x] = false;
            }
        }
    }
    
}

int main() { fastio

    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];

            if (graph[i][j] == 1) {
                if ((i+j)%2 == 0){
                    bishops_black.push_back({i, j});
                } else {
                    bishops_white.push_back({i, j});
                }
            }
        }
    }

    bishops_black_size = bishops_black.size();
    bishops_white_size = bishops_white.size();
    backtrack(0, 0, true);
    backtrack(0, 0, false);
    cout << black_max_cnt + white_max_cnt;

    return 0;
} 