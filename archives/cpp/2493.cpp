#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> tower;
vector<int> ans;
stack<pair<int, int>> s;

int main() {
    fastio

    int N; cin >> N;
    tower.resize(N); ans.resize(N, 0);
    FOR(i, 0, N) { cin >> tower[i]; }

    FOR(i, 0, N) {
        while (!s.empty()) {
            pair<int, int> temp = s.top();
            if (temp.second > tower[i]) {
                ans[i] = temp.first + 1;
                break;
            } else {
                s.pop();
            }
        }
        s.push({i, tower[i]});
    }

    FOR(i, 0, N) {
        cout << ans[i] << ' ';
    }

    return 0;
}