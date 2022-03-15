#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> ropes;

int main() {
    fastio

    int N; cin >> N;
    ropes.resize(N);
    FOR(i, 0, N) { cin >> ropes[i]; }
    sort(ropes.begin(), ropes.end(), greater<int>());

    int max_weight = 0;
    FOR(i, 0, N) {
        max_weight = max(max_weight, ropes[i] * (i+1));
    }

    cout << max_weight;

    return 0;
}