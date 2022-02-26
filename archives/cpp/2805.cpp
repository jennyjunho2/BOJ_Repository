#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll N, M; cin >> N >> M;
    vector<ll> trees;
    FOR(i, 0, N){
        ll temp; cin >> temp;
        trees.push_back(temp);
    }

    ll left = 1;
    ll right = *max_element(trees.begin(), trees.end());
    ll ans;

    while (left <= right) {
        ll mid = (left + right) / 2;
        ll cnt = 0;

        for (auto tree: trees) {
            cnt += max(0LL, tree - mid);
        }

        if (cnt < M) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans - 1;

    return 0;
}