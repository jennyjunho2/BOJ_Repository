#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int visited[10001];
int nums[10001];
queue<int> q;

int main() {fastio

    cin >> N;
    memset(visited, -1, sizeof(visited));
    FOR(i, 1, N+1) { cin >> nums[i]; }
    int a, b; cin >> a >> b;

    q.push(a);
    visited[a] = 0;

    while(!q.empty()) {
        int x = q.front();
        int incr = nums[x];
        int tmp = visited[x];
        q.pop();

        if (x == b) {
            cout << tmp;
            return 0;
        }

        while (true) {
            x += incr;
            if (x > b) { break; }
            if (!(visited[x] == -1)) { continue; }

            visited[x] = tmp + 1;
            q.push(x);
        }
    }

    cout << -1;

    return 0;
}