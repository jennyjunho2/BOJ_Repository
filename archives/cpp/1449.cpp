#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> pipes;
bool is_repaired[1001];

int main() {
    fastio

    int N, L; cin >> N >> L;
    pipes.resize(N);
    FOR(i, 0, N) { cin >> pipes[i]; }
    sort(pipes.begin(), pipes.end());

    int cnt = 0;
    FOR(i, 0, N) {
        int temp = pipes[i];
        if (!is_repaired[temp]) {
            FOR(j, temp, min(temp+L, 1001)) {
                is_repaired[j] = true;
            }
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}