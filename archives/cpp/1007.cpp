#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
ll min_sum;
struct pos{ int x, y; };
bool visited[20];
vector<pos> dots;

void backtrack(int depth, int min_idx) {
    if (depth == N/2) {
        ll x_total = 0, y_total = 0;

        FOR(i, 0, N) {
            int temp_x = dots[i].x;
            int temp_y = dots[i].y;
            if (visited[i]) {
                x_total += temp_x;
                y_total += temp_y;
            } else {
                x_total -= temp_x;
                y_total -= temp_y;
            }
        }
        ll temp = x_total*x_total + y_total*y_total;
        min_sum = min(min_sum, temp);
        return;
    }

    FOR(i, min_idx, N) {
        if (!visited[i]) {
            visited[i] = true;
            backtrack(depth + 1, i);
            visited[i] = false;
        }
    }
}

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        cin >> N;
        dots.clear();
        FOR(i, 0, N) { 
            pos temp; cin >> temp.x >> temp.y;
            dots.push_back(temp);
        }
        
        min_sum = LLONG_MAX;
        memset(visited, 0, sizeof(visited));
        backtrack(0, 0);

        cout << fixed;
        cout.precision(12);
        cout << sqrt(min_sum) << endl;
    }

    return 0;
}