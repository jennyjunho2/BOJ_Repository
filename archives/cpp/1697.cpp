#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N, K;
queue<p> q;
bool visited[200001];

int bfs(int start, int target) {
    q.push({start, 0});
    visited[start] = true;
    while (!q.empty()) {
        p temp = q.front();
        q.pop();
        int x = temp.first;
        int time = temp.second;

        if (x == target) {
            return time;
        }

        if (!visited[x+1] && x >= -1 && x < 100000) {
            q.push({x+1, time+1});
            visited[x+1] = true;
        }

        if (!visited[x-1] && x >= 1 && x < 100001) {
            q.push({x-1, time+1});
            visited[x-1] = true;
        }

        if (!visited[x*2] && x >= 0 && x <= 50000) {
            q.push({x*2, time+1});
            visited[x*2] = true;
        }
    }
}

int main() {
    fastio

    cin >> N >> K;
    if (N >= K) {
        cout << N-K;
        return 0;
    }

    int result = bfs(N, K);
    cout << result;

    return 0;
}