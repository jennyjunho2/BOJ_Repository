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
using p = pair<int, int>;
int h, w;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
char graph[102][102];
bool visited[102][102];
bool keys[26];
int document_cnt = 0;

void bfs_key(){
    memset(visited, 0, sizeof(visited));

    queue<p> q;
    q.push({0, 0});
    visited[0][0] = true;

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= h+2 || nx < 0 || nx >= w+2 || visited[ny][nx] || graph[ny][nx] == '*') { continue; }

            if ('A' <= graph[ny][nx] && graph[ny][nx] <= 'Z') {
                if (!keys[graph[ny][nx]-'A']) { continue;}
            }

            if ('a' <= graph[ny][nx] && graph[ny][nx] <= 'z') {
                keys[graph[ny][nx]-'a'] = true;
            }

            visited[ny][nx] = true;
            q.push({ny, nx});
        }
    }
}

void bfs_document() {
    memset(visited, 0, sizeof(visited));

    queue<p> q;
    q.push({0, 0});
    visited[0][0] = true;

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        FOR(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= h+2 || nx < 0 || nx >= w+2 || visited[ny][nx] || graph[ny][nx] == '*') { continue; }

            if ('A' <= graph[ny][nx] && graph[ny][nx] <= 'Z') {
                if (!keys[graph[ny][nx]-'A']) { continue;}
            }

            if (graph[ny][nx] == '$') { document_cnt++; }

            visited[ny][nx] = true;
            q.push({ny, nx});
        }
    }
}

int main() { fastio

    TC {
        document_cnt = 0;
        memset(visited, 0, sizeof(visited));
        memset(keys, 0, sizeof(keys));
        fill(&graph[0][0], &graph[0][0]+102*102, '.');
        cin >> h >> w;
        FOR(i, 1, h+1) {
            FOR(j, 1, w+1) {
                cin >> graph[i][j];
            }
        }

        string key; cin >> key;
        if (key != "0") {
            for (char ch: key) {
                keys[ch-'a'] = true;
            }
        }

        while (true) {
            int before_bfs = accumulate(keys, keys+26, 0);
            bfs_key();
            int after_bfs = accumulate(keys, keys+26, 0);
            if (before_bfs == after_bfs) { break; }
        }

        bfs_document();
        cout << document_cnt << endl;
    }

    return 0;
}