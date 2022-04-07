#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
// https://www.acmicpc.net/problem/15685
int N;
int start_y, start_x, dir, generation;
int graph[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void dragoncurve(int depth) {
    if (depth > generation) { return; }
    if (depth == 0) {
        continue
    }
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        cin >> start_x >> start_y >> dir >> generation;
        dragoncurve(0);
    }

    return 0;
}