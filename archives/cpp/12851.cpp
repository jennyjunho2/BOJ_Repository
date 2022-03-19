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
queue<p> q;
int N, K;
bool visited[100001];
int min_sec = 0;
int min_sec_cnt = 0;

int main() {
    fastio
    
    cin >> N >> K;
    q.push({N, 0});

    while (!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();

        visited[pos] = true;
        if (pos == K) {
            if (min_sec_cnt == 0) {
                min_sec = sec;
                min_sec_cnt++;
            } else {
                if (sec == min_sec) {
                    min_sec_cnt++;
                }
            }
        }

        if (pos-1 >= 0 && !visited[pos-1]) {
            q.push({pos-1, sec+1});
        }
        
        if (pos+1 <= 100000 && !visited[pos+1]) {
            q.push({pos+1, sec+1});
        }

        if (2*pos <= 100000 && !visited[2*pos]) {
            q.push({2*pos, sec+1});
        }
    }

    cout << min_sec << endl << min_sec_cnt;

    return 0;
} 