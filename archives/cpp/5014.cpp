#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int F, S, G, U, D;
int dpos[2];
bool visited[1000001];
queue<p> q;

int main() {
    fastio

    cin >> F >> S >> G >> U >> D;
    dpos[0] = U; dpos[1] = -1*D;
    q.push({S, 0});
    visited[S] = true;

    while(!q.empty()) {
        int pos = q.front().first;
        int push_cnt = q.front().second;
        q.pop();

        if (pos == G) {
            cout << push_cnt;
            return 0;
        }

        FOR(i, 0, 2) {
            int npos = pos + dpos[i];
            if (npos < 1 || npos > F) { continue; }

            if (!visited[npos]) {
                q.push({npos, push_cnt+1});
                visited[npos] = true;
            }
        }
    }

    cout << "use the stairs";

    return 0;
}