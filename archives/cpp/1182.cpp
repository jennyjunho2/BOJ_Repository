#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int nums[21];
int N, S;
bool visited[21];
int sum;
int cnt = 0;

void backtrack(int depth, int min_idx) {
    if (sum == S && depth != 0) {
        cnt++;
    }

    FOR(i, min_idx, N) {
        if (!visited[i]) {
            sum += nums[i];
            visited[i] = true;
            backtrack(depth + 1, i);
            visited[i] = false;
            sum -= nums[i];
        }
    }
}

int main() {
    fastio

    cin >> N >> S;
    FOR(i, 0, N) {
        cin >> nums[i];
    }

    backtrack(0, 0);

    cout << cnt;

    return 0;
}