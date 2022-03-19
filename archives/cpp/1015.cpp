#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N;
vector<p> A;
int ans[50];

int main() {
    fastio
    
    cin >> N;
    A.resize(N);
    FOR(i, 0, N) {
        cin >> A[i].first;
        A[i].second = i;
    }

    sort(A.begin(), A.end());
    FOR(i, 0, N) { ans[A[i].second] = i; }

    FOR(i, 0 ,N) { cout << ans[i] << ' '; }

    return 0;
} 