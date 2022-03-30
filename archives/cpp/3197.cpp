#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int R, C;
char graph[1500][1500];
bool visited[1500][1500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool is_found;
p swan;
queue<p> q_swan, q_swan_next;
queue<p> q_water, q_water_next;

void bfs_swan() {
    while(!q_swan.empty() && !is_found) {
        int y = q_swan.front().first;
        int x = q_swan.front().second;
        q_swan.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx]) { continue; }

            visited[ny][nx] = true;
            if (graph[ny][nx] == '.') {
                q_swan.push({ny, nx});
            } else if (graph[ny][nx] == 'X') {
                q_swan_next.push({ny, nx});
            } else if (graph[ny][nx] == 'L') {
                is_found = true;
                break;
            }
        }
    }
}

void bfs_water() {
    while(!q_water.empty()) {
        int y = q_water.front().first;
        int x = q_water.front().second;
        q_water.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C) { continue; }
            
            if (graph[ny][nx] == 'X') {
                graph[ny][nx] = '.';
                q_water_next.push({ny, nx});
            }
        }
    }
}

void empty_queue(queue<p>& q) {
    while(!q.empty()) {q.pop(); }
}

int main() {fastio
    
    cin >> R >> C;
    FOR(i, 0, R) {
        FOR(j, 0, C) {
            cin >> graph[i][j];

            if (graph[i][j] == 'L') {
                swan.first = i; swan.second = j;
            } 
            
            if (graph[i][j] != 'X') {
                q_water.push({i, j});
            }
        }
    }

    int days = 0;
    q_swan.push({swan.first, swan.second});
    visited[swan.first][swan.second] = true;
    while(!is_found) {
        bfs_swan();
        if (!is_found) {
            bfs_water();
            q_water = q_water_next;
            q_swan = q_swan_next;

            empty_queue(q_water_next);
            empty_queue(q_swan_next);
            days++;
        }
    }

    cout << days;

    return 0;
}