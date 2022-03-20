#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using t = tuple<int, int, int>;
int N;
int graph[20][20];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int fish_cnt = 0;
int eat_cnt = 0;
int shark_size = 2;
int shark_y, shark_x;
int total_time = 0;

t bfs(int y, int x) {
    queue<t> q;
    vector<t> distance;
    bool visited[20][20];
    memset(visited, 0, sizeof(visited));
    int min_dist = INT_MAX;

    q.push({y, x, 0});
    visited[y][x] = true;
    while (!q.empty()) {
        t temp = q.front();
        int temp_y = get<0>(temp);
        int temp_x = get<1>(temp);
        int dist = get<2>(temp);
        q.pop();

        FOR(i, 0, 4) {
            int ny = temp_y + dy[i];
            int nx = temp_x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx]) { continue; }

            if (graph[ny][nx] <= shark_size) {
                visited[ny][nx] = true;
                if (graph[ny][nx] > 0 && graph[ny][nx] < shark_size) {
                    min_dist = dist;
                    distance.push_back({dist+1, ny, nx});
                }

                if (dist+1 <= min_dist) {
                    q.push({ny, nx, dist+1});
                }
            }
        }
    }
    if (!distance.empty()) {
        sort(distance.begin(), distance.end());
        return distance[0];
    } else {
        return {INT_MAX, INT_MAX, INT_MAX};
    }
}

int main() {
    fastio
    
    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> graph[i][j];
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (graph[i][j] > 0 && graph[i][j] <= 6) {
                fish_cnt++;
            } else if (graph[i][j] == 9) {
                shark_y = i; shark_x = j;
                graph[i][j] = 0;
            }
        }
    }

    while (fish_cnt) {
        t num = bfs(shark_y, shark_x);
        if (get<0>(num) == INT_MAX && get<1>(num) == INT_MAX && get<2>(num) == INT_MAX) { break; }

        shark_y = get<1>(num);
        shark_x = get<2>(num);
        total_time += get<0>(num);

        eat_cnt++;
        fish_cnt--;
        if (shark_size == eat_cnt) {
            shark_size++;
            eat_cnt = 0;
        }
        graph[shark_y][shark_x] = 0;
    }

    cout << total_time;
    return 0;
} 