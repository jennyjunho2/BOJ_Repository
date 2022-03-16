#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int N;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int arr[25][25];
bool visited[25][25];
vector<int> danji;
int temp;

void dfs(int y, int x) {
    visited[y][x] = true;
    arr[y][x] = 0;
    temp++;
    FOR(i, 0, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (ny >= N || ny < 0 || nx >= N || nx < 0) { continue; }

        if (!visited[ny][nx] && arr[ny][nx] == 1) {
            dfs(ny, nx);
        }
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, N) {
            arr[i][j] = word[j] - '0';
        }
    }

    FOR(i, 0, N) {
        FOR(j, 0, N) {
            if (arr[i][j] == 1) {
                temp = 0;
                dfs(i, j);
                danji.push_back(temp);
            }
        }
    }

    int danji_size = danji.size();
    cout << danji_size << endl;
    sort(danji.begin(), danji.end());
    FOR(i, 0, danji_size) {
        cout << danji[i] << endl;
    }

    return 0;
}