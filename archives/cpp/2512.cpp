#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> need;

int main() {
    fastio

    int N; cin >> N;
    need.resize(N);
    FOR(i, 0, N) { cin >> need[i]; }
    int M; cin >> M;

    int left = 1, right = *max_element(need.begin(), need.end());

    // binary search
    int ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;

        int sum = 0;
        FOR(i, 0, N) {
            sum += min(mid, need[i]);
        }

        if (sum <= M) {
            ans = mid;
            left = mid+1;
            continue;
        } else if (sum > M) {
            right = mid-1;
        }
    }

    cout << ans;


    return 0;
}