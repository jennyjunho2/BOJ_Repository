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
#define INF int(1e9)
int N, K;
int visited[200001];
deque<int> dq;

int main() { fastio

    cin >> N >> K;
    dq.push_back(N);
    fill(visited, visited+200001, INF);

    visited[N] = 0;
    while (!dq.empty()) {
        int x = dq.front();
        dq.pop_front();

        if (x == K) {
            cout << visited[K];
            return 0;
        }

        if (x*2 <= 200000 && visited[2*x] > visited[x]) {
            visited[2*x] = visited[x];
            dq.push_front(2*x);
        }

        if (x-1 >= 0 & visited[x-1] > visited[x]+1) {
            visited[x-1] = visited[x]+1;
            dq.push_back(x-1);
        }

        if (x+1 <= 200000 && visited[x+1] > visited[x]+1) {
            visited[x+1] = visited[x]+1;
            dq.push_back(x+1);
        }
    }

    return 0;
} 