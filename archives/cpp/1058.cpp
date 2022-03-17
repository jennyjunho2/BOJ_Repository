#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

char graph[50][50];
int dist[50][50];

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, N) {
            graph[i][j] = word[j];
        }
    }

    FOR(k, 0, N) {
        FOR(i, 0, N) {
            FOR(j, 0, N) {
                if (i == j) { continue; }

                if (graph[i][j] == 'Y' || (graph[i][k] == 'Y' && graph[k][j] == 'Y')) {
                    dist[i][j] = 1;
                }
            }
        }
    }

    int max_cnt = -1;
    FOR(i, 0, N) {
        int cnt = 0;
        FOR(j, 0, N) {
            cnt += dist[i][j];
        }

        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt;
    
    return 0;
}