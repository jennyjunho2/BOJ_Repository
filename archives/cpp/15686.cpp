#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct pos{ int x, y; };

int N, M;
vector<pos> houses;
vector<pos> chickens;
vector<pos> leave;
bool visited[13];
int min_dist = INT_MAX;

int dist(const pos& a, const pos& b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

void backtrack(int depth, int min_idx) {
    if (depth == M) {
        int temp_dist_sum = 0;
        int houses_size = houses.size();
        int leave_size = leave.size();
        FOR(i, 0, houses_size) {
            int temp_min_dist = INT_MAX;
            FOR(j, 0, leave_size) {
                temp_min_dist = min(temp_min_dist, dist(houses[i], leave[j]));
            }
            temp_dist_sum += temp_min_dist;
        }

        min_dist = min(min_dist, temp_dist_sum);
        return;
    }

    int chickens_size = chickens.size();
    FOR(i, min_idx, chickens_size) {
        if (!visited[i]) {
            visited[i] = true;
            pos temp; temp.y = chickens[i].y; temp.x = chickens[i].x;
            leave.push_back(temp);
            backtrack(depth + 1, i);
            visited[i] = false;
            leave.pop_back();
        }
    }
}

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            int temp; cin >> temp;
            if (temp == 1) {
                pos temp;
                temp.y = i;
                temp.x = j;
                houses.push_back(temp);
            } else if (temp == 2) {
                pos temp;
                temp.y = i;
                temp.x = j;
                chickens.push_back(temp);
            }
        }
    }

    backtrack(0, 0);
    cout << min_dist;

    return 0;
}