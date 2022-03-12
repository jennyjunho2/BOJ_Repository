#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<pair<int, int>> dots;
vector<pair<int, int>> dots_ex;

int dist(const pair<int, int>& a, const pair<int, int>& b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        int x, y; cin >> x >> y;
        dots.push_back({x, y});
    }

    int total_dist = 0;
    FOR(i, 1, N) {
        total_dist += dist(dots[i], dots[i-1]);
    }

    int min_dist = INT_MAX;
    FOR(i, 1, N-1) {
        int temp_dist = total_dist - dist(dots[i], dots[i-1]) - dist(dots[i], dots[i+1]) + dist(dots[i-1], dots[i+1]);
        min_dist = min(min_dist, temp_dist);
    }
    
    cout << min_dist;

    return 0;
}