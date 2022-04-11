#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos{
    int y, x;
    pos(int _y, int _x) { this->y = _y; this->x = _x; }
};

int w, h;
char graph[20][20];
int visited[20][20];
int table[11][11];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<pos> trash;

void print_map() {
    FOR(i, 0, w) {
        FOR(j, 0, h) {
            cout << graph[i][j];
        } cout << endl;
    }
    cout << endl << endl;
}

void bfs(const pos& start) {
    memset(visited, -1, sizeof(visited));

    queue<pos> q;
    visited[start.y][start.x] = 0;
    q.push(start);

    while(!q.empty()) {
        pos now = q.front();
        q.pop();
        int y = now.y;
        int x = now.x;

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= w || nx < 0 || nx >= h || visited[ny][nx] != -1) { continue; }

            if (graph[ny][nx] != 'x') {
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

int main() { fastio

    while (true) {

        int min_dist = INT_MAX;
        cin >> h >> w;
        if (w == 0 && h == 0) { break; }

        trash.clear();
        FOR(i, 0, w) {
            FOR(j, 0, h) {
                cin >> graph[i][j];
                
                if (graph[i][j] == 'o') {
                    trash.insert(trash.begin(), {i, j});
                } else if (graph[i][j] == '*') {
                    trash.push_back({i, j});
                }
            }
        }
        
        int trash_size = trash.size();
        FOR(i, 0, trash_size) {
            bfs(trash[i]);
            FOR(j, i, trash_size) {
                table[i][j] = visited[trash[j].y][trash[j].x];
                table[j][i] = visited[trash[j].y][trash[j].x];
            }
        }

        vector<int> perm;
        FOR(i, 1, trash_size) {
            perm.push_back(i);
        }

        do {
            perm.insert(perm.begin(), 0);
            int perm_size = perm.size();
            int total_dist = 0;
            FOR(i, 0, perm_size-1) {
                int dist = table[perm[i]][perm[i+1]];
                if (dist == -1) {
                    min_dist = -1;
                    break;
                }

                total_dist += table[perm[i]][perm[i+1]];
            }

            min_dist = min(min_dist, total_dist);
            perm.erase(perm.begin());
        } while(next_permutation(ALL(perm)));

        cout << min_dist << endl;
    }

    return 0;
}