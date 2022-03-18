#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos{int y, x;};
bool visited[101];

int dist(const pos& a, const pos& b) {
    return abs(a.x-b.x) + abs(a.y-b.y);
}

int main() {
    fastio

    int t; cin >> t;
    while (t--) {
        vector<pos> stores;
        queue<pos> q;

        memset(visited, 0, sizeof(visited));
        int n; cin >> n;
        int x, y; cin >> x >> y;
        pos sang; sang.y = y; sang.x = x;
        FOR(i, 0, n) {
            cin >> x >> y;
            pos temp; temp.y = y; temp.x = x;
            stores.push_back(temp);
        }
        cin >> x >> y;
        pos end; end.y = y; end.x = x;
        bool can_go_festival = false;
        int stores_size = stores.size();

        q.push(sang);
        while(!q.empty()) {
            pos current_pos;
            current_pos.x = q.front().x;
            current_pos.y = q.front().y;
            q.pop();

            if (dist(current_pos, end) <= 1000) {
                can_go_festival = true;
                break;
            }

            FOR(i, 0, stores_size) {
                if (dist(stores[i], current_pos) <= 1000 && !visited[i]) {
                    q.push(stores[i]);
                    visited[i] = true;
                }
            }
        }

        cout << (can_go_festival ? "happy" : "sad") << endl;
    }

    return 0;
}