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
int N, K;
int min_sec = -1;
int min_sec_cnt = 0;
bool visited[100001];

void bfs(int start) {
    queue<p> q;
    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();

        visited[pos] = true;

        if (pos == K) {
            if (min_sec = -1) {
                min_sec = sec;
                min_sec_cnt++;
            } else {
                if (sec == min_sec) {
                    min_sec_cnt++;
                }
            }
            visited[pos] = false;
            continue;
        }

        if (pos+1 >= 0 && pos+1 <= 100000 && !visited[pos+1]) {
            q.push({pos+1, sec+1});
        }

        if (pos-1 >= 0 && pos+1 <= 100000 && !visited[pos-1]) {
            q.push({pos-1, sec+1});
        }

        if (pos*2 >= 0 && pos*2 <= 100000 && !visited[pos*2]) {
            q.push({pos*2, sec+1});
        }
    }
}

int main() {
    fastio
    
    cin >> N >> K;
    bfs(N);
    cout << min_sec << endl << min_sec_cnt;

    return 0;
} 