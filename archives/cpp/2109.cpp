#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
vector<p> nums;
bool visited[10001];

int main() {
    fastio

    int n; cin >> n;
    FOR(i, 0, n) {
        int p, d; cin >> p >> d;
        nums.push_back({p, d});
    }

    sort(nums.begin(), nums.end(), [](const p& a, const p& b) {
        return a.first == b.first ? a.second > b.second : a.first > b.first;
    });

    int total_money = 0;
    FOR(i, 0, n) {
        int date = nums[i].second;
        for (int j = date; j > 0; j--) {
            if (!visited[j]) {
                visited[j] = true;
                total_money += nums[i].first;
                break;
            }
        }
    }

    cout << total_money;

    return 0;
}